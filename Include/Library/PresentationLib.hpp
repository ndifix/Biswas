#ifndef PRESENTATION_LIB_HPP
#define PRESENTATION_LIB_HPP

#include <string>
#include <Biswas.hpp>
#include <Library/PartLib.hpp>
#include <Library/ThemeLib.hpp>

class PresentationPropertiesPart : public IPart {
private:
public:
    PresentationPropertiesPart (
        const std::string &root,
        std::string dir
        );

    Status
    Write (
        ) final override;
};

class PresentationPart : public IPart {
private:
    PresentationPropertiesPart *presPropPart = nullptr;
    ThemePart *themePart = nullptr;
public:
    PresentationPart (
        const std::string &root,
        std::string dir
        );

    Status
    Write (
        ) final override;
};

class Presentation {
private:
public:
    PresentationPart *part = nullptr;

    Presentation (
        const std::string &root
        );

    ~Presentation (
        );

    Status
    Write (
        );
};

#endif
