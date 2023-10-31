#ifndef XML_ELEMENT_LIB_GroupShapeProperties
#define XML_ELEMENT_LIB_GroupShapeProperties

#include <Library/XmlBaseLib.hpp>

namespace xmlElm {

class GroupShapeProperties : public XmlElement {
private:
public:
    inline GroupShapeProperties() : XmlElement("grpSpPr", xmlns::presenta) {};
};

}

#endif
