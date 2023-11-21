#include <Library/XmlElementDrawingLib.hpp>

using namespace OpenXml::Drawing;

Dark2Color::Dark2Color (
    ) : XmlElement("dk2", xmlns::drawingm)
{
    this->rgbColorModelHex = new RgbColorModelHex();
    this->rgbColorModelHex->Val->value = 0x44546A;
    this->AddChildElement(this->rgbColorModelHex);
}
