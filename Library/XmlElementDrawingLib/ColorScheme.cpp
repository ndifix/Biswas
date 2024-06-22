#include <Library/XmlElementDrawingLib/ColorScheme.hpp>

using namespace OpenXml::Drawing;

ColorScheme::ColorScheme (
    ) : XmlElement("clrScheme", xmlns::drawingm)
{
    this->Name = new AttributeString("name", "");
    this->AddAttribute(this->Name);
    this->accent1Color = new Accent1Color();
    this->accent2Color = new Accent2Color();
    this->accent3Color = new Accent3Color();
    this->accent4Color = new Accent4Color();
    this->accent5Color = new Accent5Color();
    this->accent6Color = new Accent6Color();
    this->dark1Color = new Dark1Color();
    this->dark2Color = new Dark2Color();
    this->followedHyperlinkColor = new FollowedHyperlinkColor();
    this->hyperlink = new Hyperlink();
    this->light1Color = new Light1Color();
    this->light2Color = new Light2Color();
    this->AddChildElement(this->dark1Color);
    this->AddChildElement(this->light1Color);
    this->AddChildElement(this->dark2Color);
    this->AddChildElement(this->light2Color);
    this->AddChildElement(this->accent1Color);
    this->AddChildElement(this->accent2Color);
    this->AddChildElement(this->accent3Color);
    this->AddChildElement(this->accent4Color);
    this->AddChildElement(this->accent5Color);
    this->AddChildElement(this->accent6Color);
    this->AddChildElement(this->hyperlink);
    this->AddChildElement(this->followedHyperlinkColor);
}
