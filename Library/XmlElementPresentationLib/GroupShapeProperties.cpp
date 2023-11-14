#include <Library/XmlElementPresentationLib.hpp>

using namespace OpenXml::Presentation;

GroupShapeProperties::GroupShapeProperties (
    ) : XmlElement("grpSpPr", xmlns::presenta)
{
    this->transformGroup = new Drawing::Transform2D();
    this->AddChildElement(this->transformGroup);
}
