#include <Library/XmlElementDrawingLib/EastAsianFont.hpp>

using namespace OpenXml::Drawing;

EastAsianFont::EastAsianFont (
    ) : XmlElement("ea", xmlns::drawingm)
{
    this->Typeface = new AttributeString("typeface", "");
    this->AddAttribute(this->Typeface);
}
