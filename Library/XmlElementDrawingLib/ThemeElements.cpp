#include <Library/XmlElementDrawingLib/ThemeElements.hpp>

using namespace OpenXml::Drawing;

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
