#include <Library/XmlElementDrawingLib.hpp>

using namespace OpenXml::Drawing;

EastAsianFont::EastAsianFont (
    ) : XmlElement("ea", xmlns::drawingm)
{
    this->Typeface = new Attribute("typeface", "");
    this->AddAttribute(this->Typeface);
}
