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
    ) : IPart(presDir, relType, conType)
{
    this->RootElement.reset(new OpenXml::Presentation::Presentation());
    this->xmlfile.reset(
        new xmlFile::Presentation(
            std::filesystem::path(presDir) /= "presentation.xml",
            this->RootElement
        ));
}

Status
PresentationPart::MakeDir (
    ) const
{
    Status Status;

    Status = ::MakeDir(this->partDir);
    if (Status != Status::Success) {
        return Status;
    }

    if (!this->themeParts.empty()) {
        Status = ::MakeDir(this->themeParts.front()->partDir);
        if (Status != Status::Success) {
            return Status;
        }
    }

    if (!this->slideMasterParts.empty()) {
        Status = ::MakeDir(this->slideMasterParts.front()->partDir);
        if (Status != Status::Success) {
            return Status;
        }
    }

    for (auto slideMaster:this->slideMasterParts) {
        if (!slideMaster->slideLayoutParts.empty()) {
            Status = ::MakeDir(slideMaster->slideLayoutParts.front()->partDir);
            if (Status != Status::Success) {
                return Status;
            }
            break;
        }
    }

    return Status::Success;
}

Status
PresentationPart::Write (
    )
{
    Status Status;

    auto slideMasterId = this->RootElement->slideMasterList->ids.begin();
    for (auto &slideMaster:this->slideMasterParts) {
        auto relation = this->AddRelationship(slideMaster);
        if (slideMasterId == this->RootElement->slideMasterList->ids.end()) {
            throw std::runtime_error("number of slideMasterId is invalid");
        }
        (*slideMasterId)->RelationshipId->val = relation->Id->val;
        ++slideMasterId;
    }
    this->AddRelationship(this->presPropPart);
    for (auto &theme:this->themeParts) {
        this->AddRelationship(theme);
    }

    uint32_t id = 0x80000000u;
    auto slideMasterPart = this->slideMasterParts.begin();
    for (auto &slideMasterId:this->RootElement->slideMasterList->ids) {
        slideMasterId->Id->val = std::to_string(id++);
        if (slideMasterPart == this->slideMasterParts.end()) {
            throw std::runtime_error("number of slideMaster is invalid");
        }
        for (auto &slideLayoutId:(*slideMasterPart)->RootElement->slideLayoutIdList->ids) {
            slideLayoutId->Id->val = std::to_string(id++);
        }
    }

    Status = this->MakeDir();
    if (Status != Status::Success) {
        return Status;
    }

    return IPart::Write();
}
