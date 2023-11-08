#include <Library/XmlElementLib.hpp>

using namespace OpenXml::Drawing;

ComplexScriptFont::ComplexScriptFont (
    ) : XmlElement("cs", xmlns::drawingm)
{
    this->Typeface = new Attribute("typeface", "");
    this->AddAttribute(this->Typeface);
}
