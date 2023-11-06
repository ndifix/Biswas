#include <Library/XmlElementLib.hpp>

using namespace xmlElm;

RgbColorModelHex::RgbColorModelHex (
    ) : XmlElement("srgbClr", xmlns::drawingm)
{
    this->Val = new Attribute("val");
    this->AddAttribute(this->Val);
}
