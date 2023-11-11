#pragma once

#include <Library/XmlBaseLib.hpp>
#include <Library/XmlElementLib/ApplicationNonVisualDrawingProperties.hpp>
#include <Library/XmlElementLib/NonVisualDrawingProperties.hpp>
#include <Library/XmlElementLib/NonVisualGroupShapeDrawingProperties.hpp>

namespace OpenXml::Presentation {

class NonVisualGroupShapeProperties : public XmlElement {
private:
public:
    ApplicationNonVisualDrawingProperties *applicationNonVisualDrawingProperties;
    NonVisualDrawingProperties *nonVisualDrawingProperties;
    NonVisualGroupShapeDrawingProperties *nonVisualGroupShapeDrawingProperties;
    NonVisualGroupShapeProperties();
};

}
