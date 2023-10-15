#include <cstdlib>
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
    const std::string &root,
    std::string dir
    ) : IPart(root, dir, relType, conType)
{
    this->xmlfile = new xmlFile::Presentation(root + dir + "presentation.xml");
    this->presPropPart = new PresentationPropertiesPart(root, dir);
    this->themePart = new ThemePart(root, dir + "theme/");

    this->AddChildPart(this->presPropPart);
    this->AddChildPart(this->themePart);
    this->AddSlideMaster();
}

SlideMasterPart *
PresentationPart::AddSlideMaster (
    )
{
    SlideMasterPart *part = new SlideMasterPart(this->rootDir, this->partDir + "slideMasters/");
    this->slideMasterParts.push_back(part);
    this->AddChildPart(part);

    return part;
}

Status
PresentationPart::Write (
    )
{
    Status Status;

    if (this->xmlfile == nullptr) {
        return Status::NotReady;
    }
    this->xmlfile->Write();

    if (this->presPropPart != nullptr) {
        Status = this->presPropPart->Write();
        if (Status != Status::Success) {
            return Status;
        }
    }

    if (this->themePart != nullptr) {
        Status = MakeDir(this->themePart->rootDir + this->themePart->partDir);
        if (Status != Status::Success) {
            return Status;
        }
        Status = this->themePart->Write();
        if (Status != Status::Success) {
            return Status;
        }
    }

    for (auto &part:this->slideMasterParts) {
        if (part != nullptr) {
            Status = MakeDir(part->rootDir + part->partDir);
            if (Status != Status::Success) {
                return Status;
            }
            Status = part->Write();
            if (Status != Status::Success) {
                return Status;
            }
        }
    }
    return Status::Success;
}
