#ifndef PRESENTATION_LIB_HPP
#define PRESENTATION_LIB_HPP

#include <string>
#include <Biswas.hpp>
#include <Library/ThemeLib.hpp>
#include <Library/XmlFileLib.hpp>

class PresentationPropertiesPart {
private:
    xmlFile::PresentationProperties presentationProperties;
public:
    const std::string rootDir;
    const std::string partDir;

    PresentationPropertiesPart (
        const std::string &root,
        std::string dir
        );

    Status
    Write (
        ) const;
};

class PresentationPart {
private:
    xmlFile::Presentation presentation;
    PresentationPropertiesPart *presPropPart = nullptr;
    ThemePart *themePart = nullptr;
public:
    const std::string rootDir;
    const std::string partDir;

    PresentationPart (
        const std::string &root,
        std::string dir
        );

    ~PresentationPart (
        );

    Status
    Write (
        );
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
