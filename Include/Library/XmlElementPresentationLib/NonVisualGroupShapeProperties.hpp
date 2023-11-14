#pragma once

#include <Library/XmlBaseLib.hpp>
#include <Library/XmlElementPresentationLib/ApplicationNonVisualDrawingProperties.hpp>
#include <Library/XmlElementPresentationLib/NonVisualDrawingProperties.hpp>
#include <Library/XmlElementPresentationLib/NonVisualGroupShapeDrawingProperties.hpp>

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
