#pragma once

#include <Library/PackagingLib/OpenXmlPackage.hpp>
#include <Library/PackagingLib/PresentationPart.hpp>

namespace OpenXml::Packaging {

class PresentationDocument : public OpenXmlPackage {
public:
    const PresentationPart *presentationPart;

    PresentationDocument (
        );
};

}
