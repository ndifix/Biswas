#include <Library/XmlElementLib.hpp>

using namespace xmlElm;

ColorScheme::ColorScheme (
    ) : XmlElement("clrScheme", xmlns::drawingm)
{
    this->Name = new Attribute("name", "");
    this->AddAttribute(this->Name);
}
