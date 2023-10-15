#ifndef PRESENTATION_LIB_HPP
#define PRESENTATION_LIB_HPP

#include <string>
#include <Biswas.hpp>
#include <Library/PartLib.hpp>
#include <Library/ThemeLib.hpp>
#include <Library/XmlFileLib.hpp>

class PresentationPropertiesPart : public IPart {
private:
    xmlFile::PresentationProperties presentationProperties;
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
    xmlFile::Presentation presentation;
    PresentationPropertiesPart *presPropPart = nullptr;
    ThemePart *themePart = nullptr;
public:
    PresentationPart (
        const std::string &root,
        std::string dir
        );

    ~PresentationPart (
        );

    Status
    Write (
        ) final override;
};

class Presentation {
private:
    PresentationPart *part = nullptr;
public:
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
