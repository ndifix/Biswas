#include <Library/XmlElementLib.hpp>

using namespace OpenXml::Drawing;

Accent6Color::Accent6Color (
    ) : XmlElement("accent6", xmlns::drawingm)
{
    this->rgbColorModelHex = new RgbColorModelHex();
    this->rgbColorModelHex->Val->val = "70AD47";
    this->AddChildElement(this->rgbColorModelHex);
}
