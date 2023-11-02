#ifndef XML_ELEMENT_LIB_NonVisualGroupShapeDrawingProperties
#define XML_ELEMENT_LIB_NonVisualGroupShapeDrawingProperties

#include <Library/XmlBaseLib.hpp>

namespace xmlElm {

class NonVisualGroupShapeDrawingProperties : public XmlElement {
private:
public:
    inline NonVisualGroupShapeDrawingProperties() : XmlElement("cNvGrpSpPr", xmlns::presenta) {};
};

}

#endif