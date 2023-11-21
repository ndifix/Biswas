#include <Library/XmlElementDrawingLib.hpp>
#include <iostream>

using namespace OpenXml::Drawing;

Accent1Color::Accent1Color (
    ) : XmlElement("accent1", xmlns::drawingm)
{
    this->rgbColorModelHex = new RgbColorModelHex();
    this->rgbColorModelHex->Val->value = 0x4472C4;
    this->AddChildElement(this->rgbColorModelHex);
}
