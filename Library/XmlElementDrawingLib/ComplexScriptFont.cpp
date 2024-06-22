#include <Library/XmlElementDrawingLib/ComplexScriptFont.hpp>

using namespace OpenXml::Drawing;

ComplexScriptFont::ComplexScriptFont (
    ) : XmlElement("cs", xmlns::drawingm)
{
    this->Typeface = new AttributeString("typeface", "");
    this->AddAttribute(this->Typeface);
}
