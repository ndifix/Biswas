#pragma once

#include <Library/XmlBaseLib.hpp>

namespace OpenXml::Presentation {

class NonVisualPictureDrawingProperties : public XmlElement {
private:
public:
    inline NonVisualPictureDrawingProperties() : XmlElement("cNvPicPr", xmlns::presenta) {};
};

}
