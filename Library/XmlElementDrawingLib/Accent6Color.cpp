#include <Library/XmlElementDrawingLib/Accent6Color.hpp>
#include <Library/XmlElementDrawingLib/RgbColorModelHex.hpp>

using namespace OpenXml::Drawing;

Accent6Color::Accent6Color (
    ) : XmlElement("accent6", xmlns::drawingm)
{
    this->rgbColorModelHex = new RgbColorModelHex();
    this->rgbColorModelHex->Val->value = 0x70AD47;
    this->AddChildElement(this->rgbColorModelHex);
}
