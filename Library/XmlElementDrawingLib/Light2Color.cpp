#include <Library/XmlElementDrawingLib/Light2Color.hpp>

using namespace OpenXml::Drawing;

Light2Color::Light2Color (
    ) : XmlElement("lt2", xmlns::drawingm)
{
    this->rgbColorModelHex = new RgbColorModelHex();
    this->rgbColorModelHex->Val->value = 0xE7E6E6;
    this->AddChildElement(this->rgbColorModelHex);
}
