#pragma once

#include <memory>
#include <Biswas.hpp>
#include <Library/DocumentLib.hpp>
#include <Library/PartLib.hpp>

// API用クラス
namespace biswas {

class Presentation;
class PresentationProperties;
class SlideLayout;
class SlideMaster;
class Theme;

class Presentation {
private:
    std::unique_ptr<PresentationPart> part;

    Status
    Write (
        ) const;
public:
friend Document;

    std::shared_ptr<biswas::PresentationProperties> presentationProperties;

    Presentation (
        const std::filesystem::path &tmp
        );

    SlideLayout
    AddSlideLayout (
        const SlideMaster &slideMaster
        ) const;

    SlideMaster
    AddSlideMaster (
        const Theme &theme
        ) const;

    Theme
    AddTheme (
        ) const;
};

class PresentationProperties {
private:
    std::shared_ptr<PresentationPropertiesPart> part;
public:
friend Presentation;

    inline
    PresentationProperties (
        std::shared_ptr<PresentationPropertiesPart> &presProp
        ) { this->part = presProp; }
};

class SlideLayout {
private:
    std::shared_ptr<SlideLayoutPart> part;
public:

    inline
    SlideLayout (
        std::shared_ptr<SlideLayoutPart> &slideLayout
        ) { this->part = slideLayout; }
};

class SlideMaster {
private:
    std::shared_ptr<SlideMasterPart> part;
public:
friend Presentation;

    inline
    SlideMaster (
        std::shared_ptr<SlideMasterPart> &slideMaster
        ) { this->part = slideMaster; }
};

class Theme {
private:
    std::shared_ptr<ThemePart> part;
public:
friend Presentation;

    inline
    Theme (
        std::shared_ptr<ThemePart> &theme
        ) { this->part = theme; }
};

}
