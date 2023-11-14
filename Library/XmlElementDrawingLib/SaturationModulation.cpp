#include <Library/XmlElementDrawingLib.hpp>

using namespace OpenXml::Drawing;

SaturationModulation::SaturationModulation (
    ) : XmlElement("satMod", xmlns::drawingm)
{
    this->Val = new Attribute("val");
    this->AddAttribute(this->Val);
}
