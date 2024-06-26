#include <Library/XmlElementDrawingLib/MajorFont.hpp>

using namespace OpenXml::Drawing;

MajorFont::MajorFont (
    ) : XmlElement("majorFont", xmlns::drawingm)
{
    this->complexScriptFont = new ComplexScriptFont();
    this->eastAsianFont = new EastAsianFont();
    this->latinFont = new LatinFont();
    this->latinFont->Typeface->value = "Calibri Light";
    this->AddChildElement(this->latinFont);
    this->AddChildElement(this->eastAsianFont);
    this->AddChildElement(this->complexScriptFont);
}
