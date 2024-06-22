#include <Library/XmlElementDrawingLib/Accent4Color.hpp>
#include <Library/XmlElementDrawingLib/RgbColorModelHex.hpp>

using namespace OpenXml::Drawing;

Accent4Color::Accent4Color (
    ) : XmlElement("accent4", xmlns::drawingm)
{
    this->rgbColorModelHex = new RgbColorModelHex();
    this->rgbColorModelHex->Val->value = 0xFFC000;
    this->AddChildElement(this->rgbColorModelHex);
}
