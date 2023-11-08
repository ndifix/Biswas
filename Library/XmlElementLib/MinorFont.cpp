#include <Library/XmlElementLib.hpp>

using namespace OpenXml::Drawing;

MinorFont::MinorFont (
    ) : XmlElement("minorFont", xmlns::drawingm)
{
    this->latinFont = new LatinFont();
    this->latinFont->Typeface->val = "Calibri";
    this->AddChildElement(this->latinFont);
}
