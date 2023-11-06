#include <Library/XmlElementLib.hpp>

using namespace xmlElm;

ThemeElements::ThemeElements (
    ) : XmlElement("themeElements", xmlns::drawingm)
{
    this->colorScheme = new ColorScheme();
    this->AddChildElement(this->colorScheme);
}
