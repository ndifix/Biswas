#pragma once

#include <filesystem>
#include <string>

namespace OpenXml::Packaging {

class OpenXmlPackage;

class DataPart {
public:
    const std::string            contentType;
    const OpenXmlPackage        *openXmlPackage;
    const std::filesystem::path  uri;

    inline
    DataPart (
        std::string contentType,
        OpenXmlPackage *openXmlPackage,
        std::filesystem::path uri
        ) : contentType(contentType),
            openXmlPackage(openXmlPackage),
            uri(uri)
    { }
};

}
