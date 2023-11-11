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
    const std::filesystem::path &dir
    ) : IPart(dir, relType, conType)
{
    this->RootElement.reset(new OpenXml::Presentation::Presentation());
    this->xmlfile.reset(
        new xmlFile::Presentation(
            std::filesystem::path(dir) /= "presentation.xml",
            this->RootElement
        ));

    this->presPropPart = std::shared_ptr<PresentationPropertiesPart>(new PresentationPropertiesPart(dir));

    this->AddChildPart(this->presPropPart);
    auto theme = this->AddTheme();
    this->AddSlideMaster(theme);
}

std::shared_ptr<ThemePart>
PresentationPart::AddTheme (
    )
{
    std::stringstream filename;
    filename << "theme" << this->themeParts.size() + 1 << ".xml";
    std::shared_ptr<ThemePart> part(new ThemePart(std::filesystem::path(this->partDir) /= "theme/", filename.str()));
    this->themeParts.push_back(part);
    this->AddChildPart(part);
    return part;
}

std::shared_ptr<SlideMasterPart>
PresentationPart::AddSlideMaster (
    std::shared_ptr<ThemePart> themePart
    )
{
    if (themePart->slideMasterPart != nullptr) {
        throw std::invalid_argument("this theme already used.");
    }

    this->RootElement->slideMasterList->AddId(
        2147483648 + this->slideMasterParts.size(),
        this->NextPartId()
        );

    std::stringstream filename;
    filename << "slideMaster" << this->slideMasterParts.size() + 1 << ".xml";

    std::shared_ptr<SlideMasterPart> part(new SlideMasterPart(std::filesystem::path(this->partDir) /= "slideMasters/", filename.str()));
    part->AddRelationship(themePart);
    themePart->slideMasterPart = part.get();

    this->slideMasterParts.push_back(part);
    this->AddChildPart(part);
    this->AddRelationship(part);

    return part;
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

    return Status::Success;
}

Status
PresentationPart::Write (
    )
{
    Status Status;

    for (auto &slideMaster:this->slideMasterParts) {
        this->AddRelationship(slideMaster);
    }
    this->AddRelationship(this->presPropPart);
    for (auto &theme:this->themeParts) {
        this->AddRelationship(theme);
    }

    Status = this->MakeDir();
    if (Status != Status::Success) {
        return Status;
    }

    return IPart::Write();
}
