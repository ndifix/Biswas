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

    auto theme = this->AddTheme();
    this->part->AddSlideMaster(theme.part);
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

Theme
Presentation::AddTheme (
    ) const
{
    std::stringstream filename;
    filename << "theme" << this->part->themeParts.size() + 1 << ".xml";
    std::shared_ptr<ThemePart> themePart(new ThemePart(std::filesystem::path(this->part->partDir) /= "theme/", filename.str()));

    Theme theme(themePart);
    this->part->themeParts.push_back(themePart);
    this->part->AddChildPart(themePart);
    return theme;
}
