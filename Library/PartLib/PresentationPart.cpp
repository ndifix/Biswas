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
    this->xmlfile.reset(new xmlFile::Presentation(std::filesystem::path(dir) /= "presentation.xml"));
    this->presPropPart = new PresentationPropertiesPart(dir);
    this->themePart = new ThemePart(std::filesystem::path(dir) /= "theme/");

    this->AddChildPart(this->presPropPart);
    this->AddChildPart(this->themePart);
    this->AddSlideMaster();
}

SlideMasterPart *
PresentationPart::AddSlideMaster (
    )
{
    SlideMasterPart *part = new SlideMasterPart(std::filesystem::path(this->partDir) /= "slideMasters/");
    this->slideMasterParts.push_back(part);
    this->AddChildPart(part);

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

    if (this->themePart != nullptr) {
        Status = ::MakeDir(this->themePart->partDir);
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
    ) const
{
    Status Status;

    Status = this->MakeDir();
    if (Status != Status::Success) {
        return Status;
    }

    return IPart::Write();
}
