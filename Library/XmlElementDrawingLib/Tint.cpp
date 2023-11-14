#include <Library/XmlElementDrawingLib.hpp>

using namespace OpenXml::Drawing;

Tint::Tint (
    ) : XmlElement("tint", xmlns::drawingm)
{
    this->Val = new Attribute("val");
    this->AddAttribute(this->Val);
}
