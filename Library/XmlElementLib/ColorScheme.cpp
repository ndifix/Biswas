#include <Library/XmlElementLib.hpp>

using namespace xmlElm;

ColorScheme::ColorScheme (
    ) : XmlElement("clrScheme", xmlns::drawingm)
{
    this->Name = new Attribute("name", "");
    this->AddAttribute(this->Name);
    this->accent1Color = new Accent1Color();
    this->accent2Color = new Accent2Color();
    this->accent3Color = new Accent3Color();
    this->accent4Color = new Accent4Color();
    this->accent5Color = new Accent5Color();
    this->accent6Color = new Accent6Color();
    this->AddChildElement(this->accent1Color);
    this->AddChildElement(this->accent2Color);
    this->AddChildElement(this->accent3Color);
    this->AddChildElement(this->accent4Color);
    this->AddChildElement(this->accent5Color);
    this->AddChildElement(this->accent6Color);
}
