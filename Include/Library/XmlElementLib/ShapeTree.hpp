#ifndef XML_ELEMENT_LIB_SHAPETREE
#define XML_ELEMENT_LIB_SHAPETREE

#include <Library/XmlBaseLib.hpp>
#include <Library/XmlElementLib/NonVisualGroupShapeProperties.hpp>
#include <Library/XmlElementLib/GroupShapeProperties.hpp>

namespace xmlElm {

class ShapeTree : public XmlElement {
private:
public:
    std::shared_ptr<NonVisualGroupShapeProperties> nonVisualGroupShapeProperties;
    std::shared_ptr<GroupShapeProperties> groupShapeProperties;
    ShapeTree();
};

}

#endif
