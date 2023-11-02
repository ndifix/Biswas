#ifndef XML_ELEMENT_LIB_Extents
#define XML_ELEMENT_LIB_Extents

#include <Library/XmlBaseLib.hpp>

namespace xmlElm {

class Extents : public XmlElement {
private:
public:
    Attribute *Cx;
    Attribute *Cy;
    Extents();
};

}

#endif