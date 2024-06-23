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
    void
    Dispose (
        ) const;
};

}
