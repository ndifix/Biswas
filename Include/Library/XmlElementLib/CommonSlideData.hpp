#ifndef XML_ELEMENT_LIB_COMMONSLIDEDATA
#define XML_ELEMENT_LIB_COMMONSLIDEDATA

#include <Library/XmlBaseLib.hpp>
#include <Library/XmlElementLib/ShapeTree.hpp>

namespace xmlElm {

class CommonSlideData : public XmlElement {
private:
public:
    ShapeTree *shapeTree;
    CommonSlideData();
};

}

#endif
