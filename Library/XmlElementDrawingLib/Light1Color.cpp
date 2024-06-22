#include <Library/XmlElementDrawingLib/Light1Color.hpp>

using namespace OpenXml::Drawing;

Light1Color::Light1Color (
    ) : XmlElement("lt1", xmlns::drawingm)
{
    this->systemColor = new SystemColor();
    this->systemColor->Val->value = SystemColorValues::Window;
    this->systemColor->LastColor->value = 0xFFFFFF;
    this->AddChildElement(this->systemColor);
}
