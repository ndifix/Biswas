#pragma once

#include <Library/XmlBaseLib.hpp>
#include <Library/XmlElementPresentationLib/ApplicationNonVisualDrawingProperties.hpp>
#include <Library/XmlElementPresentationLib/NonVisualDrawingProperties.hpp>
#include <Library/XmlElementPresentationLib/NonVisualShapeDrawingProperties.hpp>

namespace OpenXml::Presentation {

class NonVisualShapeProperties : public XmlElement {
private:
public:
    ApplicationNonVisualDrawingProperties *applicationNonVisualDrawingProperties;
    NonVisualDrawingProperties *nonVisualDrawingProperties;
    NonVisualShapeDrawingProperties *nonVisualShapeDrawingProperties;

    NonVisualShapeProperties();
};

}
