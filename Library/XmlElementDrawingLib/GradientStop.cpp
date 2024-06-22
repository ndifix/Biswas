#include <Library/XmlElementDrawingLib/GradientStop.hpp>

using namespace OpenXml::Drawing;

GradientStop::GradientStop (
    ) : XmlElement("gs", xmlns::drawingm)
{
    this->Position = new AttributeInt32("pos");
    this->AddAttribute(this->Position);
    this->schemeColor = new SchemeColor();
    this->schemeColor->Val->value = SchemeColorValues::PhColor;
    this->AddChildElement(this->schemeColor);
}
