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
    this->RootElement.reset(new xmlElm::Presentation());
    this->xmlfile.reset(
        new xmlFile::Presentation(
            std::filesystem::path(dir) /= "presentation.xml",
            this->RootElement
        ));

    this->presPropPart = std::shared_ptr<PresentationPropertiesPart>(new PresentationPropertiesPart(dir));
    this->themePart = std::shared_ptr<ThemePart>(new ThemePart(std::filesystem::path(dir) /= "theme/"));

    this->slideMasterList.reset(new xmlElm::SlideMasterList());
    this->xmlfile->RootElement->AddChildElement(this->slideMasterList);
    this->slideSize.reset(new xmlElm::SlideSize());
    this->xmlfile->RootElement->AddChildElement(this->slideSize);
    this->slideSize->Cx = 12192000u;
    this->slideSize->Cy = 6858000u;
    this->notesSize.reset(new xmlElm::NotesSize());
    this->xmlfile->RootElement->AddChildElement(this->notesSize);
    this->notesSize->Cx = 6858000u;
    this->notesSize->Cy = 9144000u;
    this->defaultTextStyle.reset(new xmlElm::DefaultTextStyle());
    this->xmlfile->RootElement->AddChildElement(this->defaultTextStyle);

    this->AddChildPart(this->presPropPart);
    this->AddRelationship(this->presPropPart);
    this->AddChildPart(this->themePart);
    this->AddRelationship(this->themePart);
    this->AddSlideMaster(this->themePart);
}

std::shared_ptr<SlideMasterPart>
PresentationPart::AddSlideMaster (
    std::shared_ptr<ThemePart> themePart
    )
{
    this->slideMasterList->AddId(
        2147483648 + this->slideMasterParts.size(),
        this->NextPartId()
        );

    std::shared_ptr<SlideMasterPart> part(new SlideMasterPart(std::filesystem::path(this->partDir) /= "slideMasters/"));
    part->AddRelationship(themePart);

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
