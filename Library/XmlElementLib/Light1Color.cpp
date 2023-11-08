#include <Library/XmlElementLib.hpp>

using namespace OpenXml::Drawing;

Light1Color::Light1Color (
    ) : XmlElement("lt1", xmlns::drawingm)
{
    this->systemColor = new SystemColor();
    this->systemColor->Val->val = "window";
    this->systemColor->LastColor->val = "FFFFFF";
    this->AddChildElement(this->systemColor);
}
