#include <Library/XmlElementLib.hpp>

using namespace OpenXml::Drawing;

Accent2Color::Accent2Color (
    ) : XmlElement("accent2", xmlns::drawingm)
{
    this->rgbColorModelHex = new RgbColorModelHex();
    this->rgbColorModelHex->Val->val = "ED7D31";
    this->AddChildElement(this->rgbColorModelHex);
}
