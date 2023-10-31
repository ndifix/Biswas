#ifndef XML_ELEMENT_LIB_GroupShapeProperties
#define XML_ELEMENT_LIB_GroupShapeProperties

#include <Library/XmlBaseLib.hpp>
#include <Library/XmlElementLib/Transform2D.hpp>

namespace xmlElm {

class GroupShapeProperties : public XmlElement {
private:
public:
    Transform2D *transformGroup;
    GroupShapeProperties();
};

}

#endif
