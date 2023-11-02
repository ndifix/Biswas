#ifndef XML_ELEMENT_LIB_NonVisualGroupShapeProperties
#define XML_ELEMENT_LIB_NonVisualGroupShapeProperties

#include <Library/XmlBaseLib.hpp>
#include <Library/XmlElementLib/ApplicationNonVisualDrawingProperties.hpp>
#include <Library/XmlElementLib/NonVisualDrawingProperties.hpp>
#include <Library/XmlElementLib/NonVisualGroupShapeDrawingProperties.hpp>

namespace xmlElm {

class NonVisualGroupShapeProperties : public XmlElement {
private:
public:
    ApplicationNonVisualDrawingProperties *applicationNonVisualDrawingProperties;
    NonVisualDrawingProperties *nonVisualDrawingProperties;
    NonVisualGroupShapeDrawingProperties *nonVisualGroupShapeDrawingProperties;
    NonVisualGroupShapeProperties();
};

}

#endif
