#include <Library/XmlElementDrawingLib.hpp>

using namespace OpenXml::Drawing;

LatinFont::LatinFont (
    ) : XmlElement("latin", xmlns::drawingm)
{
    this->Typeface = new AttributeString("typeface", "");
    this->AddAttribute(this->Typeface);
}
