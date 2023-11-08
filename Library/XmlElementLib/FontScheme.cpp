#include <Library/XmlElementLib.hpp>

using namespace OpenXml::Drawing;

FontScheme::FontScheme (
    ) : XmlElement("fontScheme", xmlns::drawingm)
{
    this->Name = new Attribute("name", "");
    this->AddAttribute(this->Name);
}
