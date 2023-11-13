#pragma once

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

public:
    const std::filesystem::path partDir;
    const char *relationType;
    const char *contentType;

    IPart (
        const std::filesystem::path &dir,
        const char *relType,
        const char *conType
        );

    void
    AddChildPart (
        std::shared_ptr<IPart> newPart
        );

    std::string
    GetXmlFilePath (
        ) const;

    Status
    WriteRelationship (
        ) const;

    OpenXml::Relationship *
    AddRelationship (
        std::shared_ptr<IPart> newPart
        );

    virtual
    Status
    Write (
        );
};

class PresentationPropertiesPart;
class PresentationPart;
class ThemePart;
class SlideMasterPart;
class SlideLayoutPart;

class PresentationPropertiesPart : public IPart {
private:
    std::shared_ptr<OpenXml::Presentation::PresentationProperties> RootElement;
public:
    PresentationPropertiesPart (
        const std::filesystem::path &presDir
        );
};

class PresentationPart : public IPart {
private:
    Status
    MakeDir (
        ) const;
public:
    std::shared_ptr<OpenXml::Presentation::Presentation> RootElement;
    std::shared_ptr<PresentationPropertiesPart> presPropPart;
    std::list<std::shared_ptr<ThemePart>> themeParts;
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
    SlideMasterPart *slideMasterPart = nullptr;

    ThemePart (
        const std::filesystem::path &presDir,
        const std::filesystem::path &filename
        );
};

class SlideMasterPart : public IPart {
private:
public:
    std::shared_ptr<OpenXml::Presentation::SlideMaster> RootElement;
    std::list<std::shared_ptr<SlideLayoutPart>> slideLayoutParts;
    std::shared_ptr<ThemePart> themePart;

    SlideMasterPart (
        const std::filesystem::path &presDir,
        const std::filesystem::path &filename
        );

    virtual
    Status
    Write (
        ) override;
};

class SlideLayoutPart : public IPart {
private:
    std::shared_ptr<OpenXml::Presentation::SlideLayout> RootElement;
public:
    SlideMasterPart *slideMasterPart = nullptr;

    SlideLayoutPart (
        const std::filesystem::path &presDir,
        const std::filesystem::path &filename
        );
};
