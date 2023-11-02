#include <Library/XmlElementLib.hpp>

using namespace xmlElm;

ChildOffset::ChildOffset (
    ) : XmlElement("chOff", xmlns::drawingm)
{
    this->X = new Attribute("x", "0");
    this->Y = new Attribute("y", "0");
    this->AddAttribute(this->X);
    this->AddAttribute(this->Y);
}
