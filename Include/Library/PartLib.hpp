#ifndef PART_LIB_HPP
#define PART_LIB_HPP

#include <filesystem>
#include <list>
#include <memory>
#include <string>
#include <Biswas.hpp>
#include <Library/XmlBaseLib.hpp>
#include <Library/XmlElementLib.hpp>
#include <Library/XmlRootElementLib.hpp>

class IPart {
protected:
    std::unique_ptr<XmlFile> xmlfile;
    std::list<std::shared_ptr<IPart>> childParts;
    std::list<OpenXml::Relationship*> relations;

    void
    AddChildPart (
        std::shared_ptr<IPart> newPart
        );

    std::string
    NextPartId (
        ) const;
public:
    const std::filesystem::path partDir;
    const char *relationType;
    const char *contentType;

    IPart (
        const std::filesystem::path &dir,
        const char *relType,
        const char *conType
        );

    std::string
    GetXmlFilePath (
        ) const;

    Status
    WriteRelationship (
        ) const;

    void
    AddRelationship (
        std::shared_ptr<IPart> newPart
        );

    virtual
    Status
    Write (
        ) const;
};

class PresentationPropertiesPart;
class PresentationPart;
class ThemePart;
class SlideMasterPart;

class PresentationPropertiesPart : public IPart {
private:
    std::shared_ptr<OpenXml::Presentation::PresentationProperties> RootElement;
public:
    PresentationPropertiesPart (
        const std::filesystem::path &dir
        );
};

class PresentationPart : public IPart {
private:
    std::shared_ptr<OpenXml::Presentation::Presentation> RootElement;

    std::shared_ptr<SlideMasterPart>
    AddSlideMaster (
        std::shared_ptr<ThemePart> part
        );

    Status
    MakeDir (
        ) const;
public:
    std::shared_ptr<PresentationPropertiesPart> presPropPart;
    std::shared_ptr<ThemePart> themePart;
    std::list<std::shared_ptr<SlideMasterPart>> slideMasterParts;

    PresentationPart (
        const std::filesystem::path &dir
        );

    Status
    Write (
        );
};

class ThemePart : public IPart {
private:
    std::shared_ptr<OpenXml::Drawing::Theme> RootElement;
public:
    ThemePart (
        const std::filesystem::path &dir
        );
};

class SlideMasterPart : public IPart {
private:
    std::shared_ptr<OpenXml::Presentation::SlideMaster> RootElement;
public:
    SlideMasterPart (
        const std::filesystem::path &dir
        );
};

#endif
