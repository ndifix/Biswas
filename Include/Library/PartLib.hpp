#ifndef PART_LIB_HPP
#define PART_LIB_HPP

#include <string>
#include <vector>
#include <Biswas.hpp>
#include <Library/XmlBaseLib.hpp>

class IPart {
protected:
    XmlFile *xmlfile = nullptr;
    std::vector<IPart*> childParts;

    void
    AddChildPart (
        IPart *newPart
        );
public:
    const std::string rootDir;
    const std::string partDir;
    const char *relationType;
    const char *contentType;

    IPart (
        const std::string &root,
        std::string dir,
        const char *relType,
        const char *conType
        );

    virtual
    ~IPart(
        );

    virtual
    Status
    Write (
        ) = 0;
};

class PresentationPropertiesPart;
class PresentationPart;
class ThemePart;
class SlideMasterPart;

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
    std::vector<SlideMasterPart*> slideMasterParts;

    SlideMasterPart *
    AddSlideMaster (
        );
public:
    PresentationPart (
        const std::string &root,
        std::string dir
        );

    Status
    Write (
        ) final override;
};

class ThemePart : public IPart {
private:
public:
    ThemePart (
        const std::string &root,
        std::string dir
        );

    Status
    Write (
        ) final override;
};

class SlideMasterPart : public IPart {
private:
public:
    SlideMasterPart (
        const std::string &root,
        std::string dir
        );

    Status
    Write (
        ) final override;
};

#endif
