#include <Library/XmlRootElementLib.hpp>

using namespace OpenXml::Drawing;

Theme::Theme (
    ) : XmlRootElement("theme", xmlns::drawingm)
{
    this->Name = new AttributeString("name", "");
    this->AddAttribute(this->Name);
    this->themeElements = new ThemeElements();
    this->AddChildElement(this->themeElements);
}
