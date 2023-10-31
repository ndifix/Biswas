#ifndef XML_ELEMENT_LIB_Transform2D
#define XML_ELEMENT_LIB_Transform2D

#include <Library/XmlBaseLib.hpp>

namespace xmlElm {

class Transform2D : public XmlElement {
private:
public:
    inline Transform2D() : XmlElement("xfrm", xmlns::drawingm) {};
};

}

#endif
