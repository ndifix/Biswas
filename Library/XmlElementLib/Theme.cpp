#include <Library/XmlRootElementLib.hpp>

using namespace xmlElm;

Theme::Theme (
    ) : XmlRootElement("theme", xmlns::drawingm)
{
    this->themeElements = new ThemeElements();
    this->AddChildElement(this->themeElements);
}
