#include <Library/XmlElementLib.hpp>

using namespace xmlElm;

Hyperlink::Hyperlink (
    ) : XmlElement("hlink", xmlns::drawingm)
{
    this->rgbColorModelHex = new RgbColorModelHex();
    this->rgbColorModelHex->Val->val = "0563C1";
    this->AddChildElement(this->rgbColorModelHex);
}
