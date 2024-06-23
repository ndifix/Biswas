#pragma once

#include <Library/PackagingLib/OpenXmlPartContainer.hpp>
#include <Library/XmlFileLib.hpp>

namespace OpenXml::Packaging {

class PresentationPart : public OpenXmlPart {
private:
    std::unique_ptr<XmlFile> xmlfile;
public:
    PresentationPart (
        );

    void
    Write (
        ) const;
};

}
