#pragma once

#include <Library/PackagingLib/OpenXmlPart.hpp>

namespace OpenXml::Packaging {

class PresentationPart : public OpenXmlPart {
public:
    PresentationPart (
        OpenXmlPackage *openXmlPackage
        );
};

}
