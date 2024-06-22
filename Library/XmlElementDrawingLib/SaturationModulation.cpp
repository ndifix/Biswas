#include <Library/XmlElementDrawingLib/SaturationModulation.hpp>

using namespace OpenXml::Drawing;

SaturationModulation::SaturationModulation (
    ) : XmlElement("satMod", xmlns::drawingm)
{
    this->Val = new AttributeInt32("val");
    this->AddAttribute(this->Val);
}
