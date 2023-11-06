#include <Library/XmlRootElementLib.hpp>

using namespace xmlElm;

Theme::Theme (
    ) : XmlRootElement("theme", xmlns::drawingm)
{
    this->Name = new Attribute("name", "");
    this->AddAttribute(this->Name);
    this->themeElements = new ThemeElements();
    this->AddChildElement(this->themeElements);
}
