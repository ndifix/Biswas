#include <Library/XmlElementDrawingLib.hpp>

using namespace OpenXml::Drawing;

GradientStop::GradientStop (
    ) : XmlElement("gs", xmlns::drawingm)
{
    this->Position = new Attribute("pos");
    this->AddAttribute(this->Position);
    this->schemeColor = new SchemeColor();
    this->schemeColor->Val->val = "phClr";
    this->AddChildElement(this->schemeColor);
}
