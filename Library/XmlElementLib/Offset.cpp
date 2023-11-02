#include <Library/XmlElementLib.hpp>

using namespace xmlElm;

Offset::Offset (
    ) : XmlElement("off", xmlns::drawingm)
{
    this->X = new Attribute("x");
    this->Y = new Attribute("y");
    this->X->val = "0";
    this->Y->val = "0";
    this->AddAttribute(this->X);
    this->AddAttribute(this->Y);
}
