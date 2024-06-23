#pragma once

#include <memory>
#include <Library/PackagingLib/OpenXmlPartContainer.hpp>
#include <Library/PackagingLib/OpenXmlPart.hpp>

namespace OpenXml::Packaging {

class OpenXmlPackage : OpenXmlPartContainer {
public:
    const std::unique_ptr<OpenXmlPart> rootPart;
};

}
