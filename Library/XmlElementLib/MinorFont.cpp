#include <Library/XmlElementLib.hpp>

using namespace OpenXml::Drawing;

MinorFont::MinorFont (
    ) : XmlElement("minorFont", xmlns::drawingm)
{
    this->complexScriptFont = new ComplexScriptFont();
    this->eastAsianFont = new EastAsianFont();
    this->latinFont = new LatinFont();
    this->latinFont->Typeface->val = "Calibri";
    this->AddChildElement(this->latinFont);
    this->AddChildElement(this->eastAsianFont);
    this->AddChildElement(this->complexScriptFont);
}
