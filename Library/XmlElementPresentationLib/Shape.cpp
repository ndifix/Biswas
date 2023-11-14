#include <Library/XmlElementPresentationLib.hpp>

using namespace OpenXml::Presentation;

Shape::Shape (
    ) : XmlElement("sp", xmlns::presenta)
{
    this->nonVisualShapeProperties = new NonVisualShapeProperties();
    this->AddChildElement(this->nonVisualShapeProperties);
}
