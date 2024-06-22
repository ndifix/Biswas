#include <Library/XmlElementPresentationLib/NonVisualShapeProperties.hpp>

using namespace OpenXml::Presentation;

NonVisualShapeProperties::NonVisualShapeProperties (
    ) : XmlElement("nvSpPr", xmlns::presenta)
{
    this->applicationNonVisualDrawingProperties = new ApplicationNonVisualDrawingProperties();
    this->nonVisualDrawingProperties = new NonVisualDrawingProperties();
    this->nonVisualShapeDrawingProperties = new NonVisualShapeDrawingProperties();
    this->AddChildElement(this->nonVisualDrawingProperties);
    this->AddChildElement(this->nonVisualShapeDrawingProperties);
    this->AddChildElement(this->applicationNonVisualDrawingProperties);
}
