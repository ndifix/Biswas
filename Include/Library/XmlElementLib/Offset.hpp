#ifndef XML_ELEMENT_LIB_Offset
#define XML_ELEMENT_LIB_Offset

#include <Library/XmlBaseLib.hpp>

namespace xmlElm {

class Offset : public XmlElement {
private:
public:
    Attribute *X;
    Attribute *Y;
    Offset();
};

}

#endif
