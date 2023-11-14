#include <Library/XmlElementPresentationLib.hpp>

using namespace OpenXml::Presentation;

NonVisualShapeProperties::NonVisualShapeProperties (
    ) : XmlElement("nvSpPr", xmlns::presenta)
{
    this->applicationNonVisualDrawingProperties = new ApplicationNonVisualDrawingProperties();
    this->nonVisualDrawingProperties = new NonVisualDrawingProperties();
    this->AddChildElement(this->nonVisualDrawingProperties);
    this->AddChildElement(this->applicationNonVisualDrawingProperties);
}
