#include <Library/XmlElementDrawingLib.hpp>

using namespace OpenXml::Drawing;

Tint::Tint (
    ) : XmlElement("tint", xmlns::drawingm)
{
    this->Val = new AttributeInt32("val");
    this->AddAttribute(this->Val);
}
