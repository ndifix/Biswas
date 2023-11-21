#include <Library/XmlElementDrawingLib.hpp>

using namespace OpenXml::Drawing;

Dark1Color::Dark1Color (
    ) : XmlElement("dk1", xmlns::drawingm)
{
    this->systemColor = new SystemColor();
    this->systemColor->Val->value = SystemColorValues::WindowText;
    this->systemColor->LastColor->val = "000000";
    this->AddChildElement(this->systemColor);
}
