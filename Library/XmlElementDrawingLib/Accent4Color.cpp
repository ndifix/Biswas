#include <Library/XmlElementDrawingLib.hpp>

using namespace OpenXml::Drawing;

Accent4Color::Accent4Color (
    ) : XmlElement("accent4", xmlns::drawingm)
{
    this->rgbColorModelHex = new RgbColorModelHex();
    this->rgbColorModelHex->Val->val = "FFC000";
    this->AddChildElement(this->rgbColorModelHex);
}
