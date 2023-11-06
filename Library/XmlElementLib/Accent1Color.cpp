#include <Library/XmlElementLib.hpp>

using namespace xmlElm;

Accent1Color::Accent1Color (
    ) : XmlElement("accent1", xmlns::drawingm)
{
    this->rgbColorModelHex = new RgbColorModelHex();
    this->rgbColorModelHex->Val->val = "4472C4";
    this->AddChildElement(this->rgbColorModelHex);
}
