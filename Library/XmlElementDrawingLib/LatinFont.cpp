#include <Library/XmlElementDrawingLib.hpp>

using namespace OpenXml::Drawing;

LatinFont::LatinFont (
    ) : XmlElement("latin", xmlns::drawingm)
{
    this->Typeface = new Attribute("typeface");
    this->AddAttribute(this->Typeface);
}
