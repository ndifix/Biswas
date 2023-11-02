#ifndef XML_ELEMENT_LIB_Transform2D
#define XML_ELEMENT_LIB_Transform2D

#include <Library/XmlBaseLib.hpp>
#include <Library/XmlElementLib/Extents.hpp>

namespace xmlElm {

class Transform2D : public XmlElement {
private:
public:
    Extents *extents;
    Transform2D();
};

}

#endif
