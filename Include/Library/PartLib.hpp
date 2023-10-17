#ifndef PART_LIB_HPP
#define PART_LIB_HPP

#include <filesystem>
#include <list>
#include <memory>
#include <Biswas.hpp>
#include <Library/XmlBaseLib.hpp>

class IPart {
protected:
    std::unique_ptr<XmlFile> xmlfile;
    std::list<std::shared_ptr<IPart>> childParts;

    void
    AddChildPart (
        std::shared_ptr<IPart> newPart
        );
public:
    const std::string partDir;
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
public:
    PresentationPropertiesPart (
        const std::filesystem::path &dir
        );
};

class PresentationPart : public IPart {
private:
    std::shared_ptr<PresentationPropertiesPart> presPropPart;
    std::shared_ptr<ThemePart> themePart;
    std::list<std::shared_ptr<SlideMasterPart>> slideMasterParts;

    std::shared_ptr<SlideMasterPart>
    AddSlideMaster (
        );

    Status
    MakeDir (
        ) const;
public:
    PresentationPart (
        const std::filesystem::path &dir
        );

    Status
    Write (
        ) const final override;
};

class ThemePart : public IPart {
private:
public:
    ThemePart (
        const std::filesystem::path &dir
        );
};

class SlideMasterPart : public IPart {
private:
public:
    SlideMasterPart (
        const std::filesystem::path &dir
        );
};

#endif
