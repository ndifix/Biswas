#include <iostream>
#include <sstream>
#include <stdexcept>
#include <string>
#include <Biswas.hpp>
#include <Library/PartLib.hpp>
#include <Library/UtilLib.hpp>
#include <Library/XmlFileLib.hpp>

namespace {
const char *relType = "http://schemas.openxmlformats.org/officeDocument/2006/relationships/officeDocument";
const char *conType = "application/vnd.openxmlformats-officedocument.presentationml.presentation.main+xml";
}

PresentationPart::PresentationPart (
    const std::filesystem::path &presDir
    ) : IPart(presDir, relType, conType),
        mediaDir(presDir / "media/")
{
    this->RootElement.reset(new OpenXml::Presentation::Presentation());
    this->xmlfile.reset(
        new xmlFile::Presentation(
            presDir / "presentation.xml",
            this->RootElement
        ));
}

biswas::Status
PresentationPart::MakeDir (
    ) const
{
    biswas::Status Status;

    Status = ::MakeDir(this->partDir);
    if (Status != biswas::Status::Success) {
        return Status;
    }

    if (!this->picutrePaths.empty()) {
        Status = ::MakeDir(this->mediaDir);
        if (Status != biswas::Status::Success) {
            return Status;
        }
    }

    if (!this->themeParts.empty()) {
        Status = ::MakeDir(this->themeParts.front()->partDir);
        if (Status != biswas::Status::Success) {
            return Status;
        }
    }

    if (!this->slideMasterParts.empty()) {
        Status = ::MakeDir(this->slideMasterParts.front()->partDir);
        if (Status != biswas::Status::Success) {
            return Status;
        }
    }

    for (auto slideMaster:this->slideMasterParts) {
        if (!slideMaster->slideLayoutParts.empty()) {
            Status = ::MakeDir(slideMaster->slideLayoutParts.front()->partDir);
            if (Status != biswas::Status::Success) {
                return Status;
            }
            break;
        }
    }

    if (!this->slideParts.empty()) {
        Status = ::MakeDir(this->slideParts.front()->partDir);
        if (Status != biswas::Status::Success) {
            return Status;
        }
    }

    return biswas::Status::Success;
}

std::filesystem::path
PresentationPart::GetPicturePath (
    std::filesystem::path originalPath
    )
{
    const auto absOriginal = std::filesystem::absolute(originalPath);
    if (this->picutrePaths.count(absOriginal.string()) > 0) {
        return this->picutrePaths.at(absOriginal.string());
    }

    std::stringstream filename;
    filename
        << "image"
        << this->picutrePaths.size() + 1
        << absOriginal.extension().string()
        ;

    std::filesystem::path mediaPath = this->mediaDir / filename.str();
    this->picutrePaths.emplace(absOriginal.string(), mediaPath);

    return mediaPath;
}

biswas::Status
PresentationPart::Write (
    )
{
    biswas::Status Status;

    auto slideMasterId = this->RootElement->slideMasterList->ids.begin();
    for (auto &slideMaster:this->slideMasterParts) {
        auto relation = this->AddRelationship(slideMaster);
        if (slideMasterId == this->RootElement->slideMasterList->ids.end()) {
            throw std::runtime_error("number of slideMasterId is invalid");
        }
        (*slideMasterId)->RelationshipId->value = *relation->Id->value.get();
        ++slideMasterId;
    }

    auto slideId = this->RootElement->slideIdList->ids.begin();
    for (auto &slide:this->slideParts) {
        auto relation = this->AddRelationship(slide);
        if (slideId == this->RootElement->slideIdList->ids.end()) {
            throw std::runtime_error("number of slideId is invalid");
        }
        (*slideId)->RelationshipId->value = *relation->Id->value.get();
        ++slideId;
    }

    this->AddRelationship(this->presPropPart);
    for (auto &theme:this->themeParts) {
        this->AddRelationship(theme);
    }

    uint32_t id = 0x80000000u;
    auto slideMasterPart = this->slideMasterParts.begin();
    for (auto &slideMasterId:this->RootElement->slideMasterList->ids) {
        slideMasterId->Id->value = id++;
        if (slideMasterPart == this->slideMasterParts.end()) {
            throw std::runtime_error("number of slideMaster is invalid");
        }
        for (auto &slideLayoutId:(*slideMasterPart)->RootElement->slideLayoutIdList->ids) {
            slideLayoutId->Id->value = id++;
        }
    }

    id = 0x100u;
    for (auto &slideId:this->RootElement->slideIdList->ids) {
        slideId->Id->value = id++;
    }

    Status = this->MakeDir();
    if (Status != biswas::Status::Success) {
        return Status;
    }

    if (!this->picutrePaths.empty()) {
        for (auto path:this->picutrePaths) {
            auto original = std::filesystem::path(path.first);
            try {
                std::filesystem::copy_file(original, path.second);
            } catch(std::exception &e) {
                std::cerr
                    << "Failed to copy file: "
                    << original.string()
                    << " -> "
                    << path.second.string()
                    << "\n";
                return biswas::Status::Error;
            }
        }
    }

    return IPart::Write();
}
