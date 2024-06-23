#pragma once

#include <Library/PackagingLib/OpenXmlPart.hpp>

namespace OpenXml::Packaging {

class PresentationPart : public OpenXmlPart {
private:
    std::unique_ptr<XmlFile> xmlfile;
public:
    PresentationPart (
        OpenXmlPackage *openXmlPackage
        );

    void
    Write (
        ) const;
};

}
