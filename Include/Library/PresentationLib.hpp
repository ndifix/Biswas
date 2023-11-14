#pragma once

#include <memory>
#include <Biswas.hpp>
#include <Library/DocumentLib.hpp>
#include <Library/PartLib.hpp>
#include <Library/SlideObjectLib.hpp>

// API用クラス
namespace biswas {

class Presentation;
class PresentationProperties;
class Slide;
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

    Slide
    AddSlide (
        const SlideLayout &slideLayout
        ) const;

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

class Slide {
private:
    std::shared_ptr<SlidePart> part;
public:

    inline
    Slide (
        std::shared_ptr<SlidePart> &slide
        ) { this->part = slide; }

    TextBox
    AddTextBox (
        ) const;
};

class SlideLayout {
private:
    std::shared_ptr<SlideLayoutPart> part;
public:
friend Presentation;

    inline
    SlideLayout (
        std::shared_ptr<SlideLayoutPart> &slideLayout
        ) { this->part = slideLayout; }

    TextBox
    AddTextBox (
        ) const;
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
