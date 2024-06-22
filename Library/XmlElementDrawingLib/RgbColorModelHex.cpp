#include <Library/XmlElementDrawingLib/RgbColorModelHex.hpp>

using namespace OpenXml::Drawing;

RgbColorModelHex::RgbColorModelHex (
    ) : XmlElement("srgbClr", xmlns::drawingm)
{
    this->Val = new AttributeHexBinaryValue("val");
    this->AddAttribute(this->Val);
}
