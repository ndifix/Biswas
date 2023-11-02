#ifndef XML_ELEMENT_LIB_ChildOffset
#define XML_ELEMENT_LIB_ChildOffset

#include <Library/XmlBaseLib.hpp>

namespace xmlElm {

class ChildOffset : public XmlElement {
private:
public:
    Attribute *X;
    Attribute *Y;
    ChildOffset();
};

}

#endif
