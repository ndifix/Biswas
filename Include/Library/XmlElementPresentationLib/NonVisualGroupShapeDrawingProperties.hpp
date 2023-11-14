#pragma once

#include <Library/XmlBaseLib.hpp>

namespace OpenXml::Presentation {

class NonVisualGroupShapeDrawingProperties : public XmlElement {
private:
public:
    inline NonVisualGroupShapeDrawingProperties() : XmlElement("cNvGrpSpPr", xmlns::presenta) {};
};

}
