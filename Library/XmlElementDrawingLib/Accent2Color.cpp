#include <Library/XmlElementDrawingLib.hpp>

using namespace OpenXml::Drawing;

Accent2Color::Accent2Color (
    ) : XmlElement("accent2", xmlns::drawingm)
{
    this->rgbColorModelHex = new RgbColorModelHex();
    this->rgbColorModelHex->Val->value = 0xED7D31;
    this->AddChildElement(this->rgbColorModelHex);
}
