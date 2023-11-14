#include <Library/XmlElementPresentationLib.hpp>

using namespace OpenXml::Presentation;

ShapeProperties::ShapeProperties (
    ) : XmlElement("spPr", xmlns::presenta)
{
    this->transform2D = new Drawing::Transform2D();
    this->AddChildElement(this->transform2D);
}
