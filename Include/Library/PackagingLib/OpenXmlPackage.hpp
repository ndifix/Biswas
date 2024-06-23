#pragma once

#include <filesystem>
#include <memory>
#include <Library/PackagingLib/OpenXmlPartContainer.hpp>
#include <Library/PackagingLib/OpenXmlPart.hpp>

namespace OpenXml::Packaging {

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
