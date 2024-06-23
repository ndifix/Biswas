#pragma once

#include <list>
#include <memory>
#include <string>
#include <Library/PackagingLib/DataPartReferenceRelationship.hpp>
#include <Library/XmlRootElementLib.hpp>

namespace OpenXml::Packaging {

class IdPartPair;
class OpenXmlPart;

class OpenXmlPartContainer {
private:
    std::list<std::unique_ptr<DataPartReferenceRelationship>> dataPartReferenceRelationships;
public:
    std::list<IdPartPair>                                     parts;

    std::shared_ptr<OpenXmlPart>
    AddPart (
        std::shared_ptr<OpenXmlPart> part
        );
};

class OpenXmlPart : OpenXmlPartContainer {
private:
public:
    const std::string                contentType;
    const std::string                relationshipType;
    std::shared_ptr<XmlRootElement>  rootElement;
    const std::filesystem::path      uri;

    OpenXmlPart (
        const std::string                contentType,
        const std::string                relationshipType,
        XmlRootElement                  *openXmlPartRootElement,
        const std::filesystem::path      uri
        );

    virtual
    void
    Write (
        ) const = 0;
};

class OpenXmlPackage : public OpenXmlPartContainer {
private:
    const std::string path;
public:
    std::shared_ptr<OpenXmlPart>  rootPart;

    void
    Dispose (
        ) const;
};

class IdPartPair {
public:
    std::shared_ptr<OpenXmlPart> openXmlPart;
    const std::string            relationshipId;

    inline
    IdPartPair (
        std::shared_ptr<OpenXmlPart> openXmlPart,
        const std::string  relationshipId
        ) : relationshipId(relationshipId)
        {
            this->openXmlPart = openXmlPart;
        }
};

}
