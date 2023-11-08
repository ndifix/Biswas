#ifndef XML_ELEMENT_LIB_GroupShapeProperties
#define XML_ELEMENT_LIB_GroupShapeProperties

#include <Library/XmlBaseLib.hpp>
#include <Library/XmlElementLib/Transform2D.hpp>

namespace OpenXml::Presentation {

class GroupShapeProperties : public XmlElement {
private:
public:
    Drawing::Transform2D *transformGroup;
    GroupShapeProperties();
};

}

#endif
