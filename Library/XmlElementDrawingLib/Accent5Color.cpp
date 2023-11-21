#include <Library/XmlElementDrawingLib.hpp>

using namespace OpenXml::Drawing;

Accent5Color::Accent5Color (
    ) : XmlElement("accent5", xmlns::drawingm)
{
    this->rgbColorModelHex = new RgbColorModelHex();
    this->rgbColorModelHex->Val->value = 0x5B9BD5;
    this->AddChildElement(this->rgbColorModelHex);
}
