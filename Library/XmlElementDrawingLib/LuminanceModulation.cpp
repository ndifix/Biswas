#include <Library/XmlElementDrawingLib.hpp>

using namespace OpenXml::Drawing;

LuminanceModulation::LuminanceModulation (
    ) : XmlElement("lumMod", xmlns::drawingm)
{
    this->Val = new AttributeInt32("val");
    this->AddAttribute(this->Val);
}
