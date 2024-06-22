#include <Library/XmlElementDrawingLib/LinearGradientFill.hpp>

using namespace OpenXml::Drawing;

LinearGradientFill::LinearGradientFill (
    ) : XmlElement("lin", xmlns::drawingm)
{
    this->Angle = new AttributeInt32("ang");
    this->Scaled = new AttributeBool("scaled");
    this->AddAttribute(this->Angle);
    this->AddAttribute(this->Scaled);
}
