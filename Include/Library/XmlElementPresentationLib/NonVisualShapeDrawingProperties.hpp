#pragma once

#include <Library/XmlBaseLib.hpp>

namespace OpenXml::Presentation {

class NonVisualShapeDrawingProperties : public XmlElement {
private:
public:
    inline NonVisualShapeDrawingProperties() : XmlElement("cNvSpPr", xmlns::presenta) {};
};

}
