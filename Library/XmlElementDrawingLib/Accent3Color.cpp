#include <Library/XmlElementDrawingLib.hpp>

using namespace OpenXml::Drawing;

Accent3Color::Accent3Color (
    ) : XmlElement("accent3", xmlns::drawingm)
{
    this->rgbColorModelHex = new RgbColorModelHex();
    this->rgbColorModelHex->Val->value = 0xA5A5A5;
    this->AddChildElement(this->rgbColorModelHex);
}
