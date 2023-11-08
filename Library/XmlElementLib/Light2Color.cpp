#include <Library/XmlElementLib.hpp>

using namespace OpenXml::Drawing;

Light2Color::Light2Color (
    ) : XmlElement("lt2", xmlns::drawingm)
{
    this->rgbColorModelHex = new RgbColorModelHex();
    this->rgbColorModelHex->Val->val = "E7E6E6";
    this->AddChildElement(this->rgbColorModelHex);
}
