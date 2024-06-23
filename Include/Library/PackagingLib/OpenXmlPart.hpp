#pragma once

#include <filesystem>
#include <list>
#include <memory>
#include <string>
#include <Library/XmlRootElementLib.hpp>
#include <Library/PackagingLib/OpenXmlPartContainer.hpp>

namespace OpenXml::Packaging {

class OpenXmlPackage;

class OpenXmlPart : OpenXmlPartContainer {
private:
public:
    const std::string                contentType;
    const OpenXmlPackage            *openXmlPackage;
    const std::string                relationshipType;
    std::unique_ptr<XmlRootElement>  rootElement;
    const std::filesystem::path      uri;

    OpenXmlPart (
        const std::string                contentType,
        const OpenXmlPackage            *openXmlPackage,
        const std::string                relationshipType,
        XmlRootElement                  *openXmlPartRootElement,
        const std::filesystem::path      uri
        );
};

}
