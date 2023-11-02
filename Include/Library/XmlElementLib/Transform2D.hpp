#ifndef XML_ELEMENT_LIB_Transform2D
#define XML_ELEMENT_LIB_Transform2D

#include <Library/XmlBaseLib.hpp>
#include <Library/XmlElementLib/Extents.hpp>
#include <Library/XmlElementLib/Offset.hpp>

namespace xmlElm {

class Transform2D : public XmlElement {
private:
public:
    ChildOffset *childOffset;
    Extents *extents;
    Offset *offset;
    Transform2D();
};

}

#endif
