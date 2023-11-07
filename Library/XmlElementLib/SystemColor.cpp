#include <Library/XmlElementLib.hpp>

using namespace xmlElm;

SystemColor::SystemColor (
    ) : XmlElement("sysClr", xmlns::drawingm)
{
    this->LastColor = new Attribute("lastClr");
    this->Val = new Attribute("val");
    this->AddAttribute(this->Val);
    this->AddAttribute(this->LastColor);
}