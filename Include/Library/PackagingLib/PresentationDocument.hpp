#pragma once

#include <Library/PackagingLib/OpenXmlPartContainer.hpp>
#include <Library/PackagingLib/PresentationPart.hpp>

namespace OpenXml::Packaging {

class PresentationDocument : public OpenXmlPackage {
public:
    PresentationPart *presentationPart;

    PresentationDocument (
        );
};

}
