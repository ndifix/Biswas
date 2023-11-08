#include <Library/XmlElementLib.hpp>

using namespace OpenXml::Drawing;

MajorFont::MajorFont (
    ) : XmlElement("majorFont", xmlns::drawingm)
{
    this->eastAsianFont = new EastAsianFont();
    this->latinFont = new LatinFont();
    this->latinFont->Typeface->val = "Calibri Light";
    this->AddChildElement(this->latinFont);
    this->AddChildElement(this->eastAsianFont);
}
