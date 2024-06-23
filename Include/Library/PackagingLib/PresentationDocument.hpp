#pragma once

#include <Library/PackagingLib/OpenXmlPackage.hpp>

namespace OpenXml::Packaging {

class PresentationDocument : OpenXmlPackage {
public:
    const std::unique_ptr<OpenXmlPart> rootPart;
};

}
