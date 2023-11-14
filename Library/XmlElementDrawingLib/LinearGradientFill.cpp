#include <Library/XmlElementDrawingLib.hpp>

using namespace OpenXml::Drawing;

LinearGradientFill::LinearGradientFill (
    ) : XmlElement("lin", xmlns::drawingm)
{
    this->Angle = new Attribute("ang");
    this->Scaled = new Attribute("scaled");
    this->AddAttribute(this->Angle);
    this->AddAttribute(this->Scaled);
}
