#include <Library/XmlElementDrawingLib.hpp>

using namespace OpenXml::Drawing;

LuminanceModulation::LuminanceModulation (
    ) : XmlElement("lumMod", xmlns::drawingm)
{
    this->Val = new Attribute("val");
    this->AddAttribute(this->Val);
}
