#include <Library/XmlElementLib.hpp>

using namespace xmlElm;

Accent5Color::Accent5Color (
    ) : XmlElement("accent5", xmlns::drawingm)
{
    this->rgbColorModelHex = new RgbColorModelHex();
    this->rgbColorModelHex->Val->val = "5B9BD5";
    this->AddChildElement(this->rgbColorModelHex);
}
