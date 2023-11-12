#include <sstream>
#include <Biswas.hpp>
#include <Library/DocumentLib.hpp>
#include <Library/PartLib.hpp>
#include <Library/PresentationLib.hpp>

using namespace biswas;

Presentation::Presentation (
    const std::filesystem::path &tmp
    )
{
    auto presentationDir = std::filesystem::path(tmp) /= "ppt/";
    this->part.reset(new PresentationPart(presentationDir));

    auto presProp = std::shared_ptr<PresentationPropertiesPart>(new PresentationPropertiesPart(presentationDir));
    this->presentationProperties.reset(new biswas::PresentationProperties(presProp));
    this->part->presPropPart = presProp;
    this->part->AddChildPart(this->presentationProperties->part);
}

Status
Presentation::Write (
    ) const
{
    Status Status;

    if (this->part != nullptr) {
        Status = this->part->Write();
        if (Status != Status::Success) {
            return Status;
        }
    }
    return Status::Success;
}

SlideMaster
Presentation::AddSlideMaster (
    const Theme &theme
    ) const
{
    if (theme.part->slideMasterPart != nullptr) {
        throw std::invalid_argument("this theme already used.");
    }

    this->part->RootElement->slideMasterList->AddId(
        2147483648 + this->part->slideMasterParts.size(),
        this->part->NextPartId()
        );

    std::stringstream filename;
    filename << "slideMaster" << this->part->slideMasterParts.size() + 1 << ".xml";

    std::shared_ptr<SlideMasterPart> slideMasterPart(new SlideMasterPart(this->part->partDir, filename.str()));
    slideMasterPart->AddRelationship(theme.part);
    theme.part->slideMasterPart = slideMasterPart.get();

    this->part->slideMasterParts.push_back(slideMasterPart);
    this->part->AddChildPart(slideMasterPart);
    this->part->AddRelationship(slideMasterPart);

    return SlideMaster(slideMasterPart);
}

Theme
Presentation::AddTheme (
    ) const
{
    std::stringstream filename;
    filename << "theme" << this->part->themeParts.size() + 1 << ".xml";
    std::shared_ptr<ThemePart> themePart(new ThemePart(this->part->partDir, filename.str()));

    Theme theme(themePart);
    this->part->themeParts.push_back(themePart);
    this->part->AddChildPart(themePart);
    return theme;
}
