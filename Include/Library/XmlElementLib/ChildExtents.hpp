#ifndef XML_ELEMENT_LIB_ChildExtents
#define XML_ELEMENT_LIB_ChildExtents

#include <Library/XmlBaseLib.hpp>

namespace xmlElm {

class ChildExtents : public XmlElement {
private:
public:
    Attribute *Cx;
    Attribute *Cy;
    ChildExtents();
};

}

#endif
