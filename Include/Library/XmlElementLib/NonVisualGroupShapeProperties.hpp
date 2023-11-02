#ifndef XML_ELEMENT_LIB_NonVisualGroupShapeProperties
#define XML_ELEMENT_LIB_NonVisualGroupShapeProperties

#include <Library/XmlBaseLib.hpp>
#include <Library/XmlElementLib/NonVisualDrawingProperties.hpp>

namespace xmlElm {

class NonVisualGroupShapeProperties : public XmlElement {
private:
public:
    NonVisualDrawingProperties *nonVisualDrawingProperties;
    NonVisualGroupShapeProperties();
};

}

#endif
