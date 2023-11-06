#include <Library/XmlElementLib.hpp>

using namespace xmlElm;

ThemeElements::ThemeElements (
    ) : XmlElement("themeElements", xmlns::drawingm)
{
    this->colorScheme = new ColorScheme();
    this->fontScheme = new FontScheme();
    this->formatScheme = new FormatScheme();
    this->AddChildElement(this->colorScheme);
    this->AddChildElement(this->fontScheme);
    this->AddChildElement(this->formatScheme);
}