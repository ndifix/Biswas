#pragma once

#include <list>
#include <memory>
#include <Library/PackagingLib/DataPartReferenceRelationship.hpp>
#include <Library/XmlRootElementLib.hpp>

namespace OpenXml::Packaging {

class IdPartPair;
class OpenXmlPackage;

class OpenXmlPartContainer {
private:
    std::list<std::unique_ptr<DataPartReferenceRelationship>> dataPartReferenceRelationships;
    std::list<std::shared_ptr<IdPartPair>>                    parts;
};

class OpenXmlPart : OpenXmlPartContainer {
private:
public:
    const std::string                contentType;
    const OpenXmlPackage            *openXmlPackage;
    const std::string                relationshipType;
    std::shared_ptr<XmlRootElement>  rootElement;
    const std::filesystem::path      uri;

    OpenXmlPart (
        const std::string                contentType,
        const OpenXmlPackage            *openXmlPackage,
        const std::string                relationshipType,
        XmlRootElement                  *openXmlPartRootElement,
        const std::filesystem::path      uri
        );

    virtual
    void
    Write (
        ) const = 0;
};

class OpenXmlPackage : OpenXmlPartContainer {
private:
    const std::filesystem::path tmp = std::filesystem::absolute("tmp/");
    const std::string path;
public:
    const std::unique_ptr<OpenXmlPart>  rootPart;

    OpenXmlPackage (
        OpenXmlPart *openXmlPart
        );

    void
    Dispose (
        ) const;
};

}
