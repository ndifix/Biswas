#include <Library/XmlElementLib.hpp>

using namespace xmlElm;

Dark2Color::Dark2Color (
    ) : XmlElement("dk2", xmlns::drawingm)
{
    this->rgbColorModelHex = new RgbColorModelHex();
    this->rgbColorModelHex->Val->val = "44546A";
    this->AddChildElement(this->rgbColorModelHex);
}
