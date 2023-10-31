#ifndef XML_ELEMENT_LIB_NonVisualGroupShapeProperties
#define XML_ELEMENT_LIB_NonVisualGroupShapeProperties

#include <Library/XmlBaseLib.hpp>

namespace xmlElm {

class NonVisualGroupShapeProperties : public XmlElement {
private:
public:
    inline NonVisualGroupShapeProperties() : XmlElement("nvGrpSpPr", xmlns::presenta) {};
};

}

#endif
