#pragma once

#include <Library/PackagingLib/OpenXmlPackage.hpp>

namespace OpenXml::Packaging {

class PresentationDocument : public OpenXmlPackage {
public:
    const std::unique_ptr<OpenXmlPart> rootPart;

    PresentationDocument (
        );
};

}
