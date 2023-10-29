#ifndef XML_ELEMENT_LIB_SHAPETREE
#define XML_ELEMENT_LIB_SHAPETREE

#include <Library/XmlBaseLib.hpp>

namespace xmlElm {

class ShapeTree : public XmlElement {
private:
public:
    inline ShapeTree() : XmlElement("spTree", xmlns::presenta) {};
};

}

#endif
