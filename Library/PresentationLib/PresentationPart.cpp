#include <cstdlib>
#include <string>
#include <Biswas.hpp>
#include <Library/PresentationLib.hpp>
#include <Library/UtilLib.hpp>

namespace {
const char *relType = "http://schemas.openxmlformats.org/officeDocument/2006/relationships/officeDocument";
const char *conType = "application/vnd.openxmlformats-officedocument.presentationml.presentation.main+xml";
}

PresentationPart::PresentationPart (
    const std::string &root,
    std::string dir
    ) : IPart(root, dir, relType, conType),
        presentation(root + dir + "presentation.xml")
{
    this->presPropPart = new PresentationPropertiesPart(root, dir);
    this->themePart = new ThemePart(root, dir + "theme/");
}

PresentationPart::~PresentationPart (
    )
{
    if (this->presPropPart != nullptr) {
        delete this->presPropPart;
        this->presPropPart = nullptr;
    }

    if (this->themePart != nullptr) {
        delete this->themePart;
        this->themePart = nullptr;
    }
}

Status
PresentationPart::Write (
    )
{
    Status Status;

    this->presentation.Write();

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
    return Status::Success;
}
