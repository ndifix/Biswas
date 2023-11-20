#include <Library/XmlElementPresentationLib.hpp>

using namespace OpenXml::Presentation;

ColorMap::ColorMap (
    ) : XmlElement("clrMap", xmlns::presenta)
{
    this->Accent1 = new AttributeColorScheme("accent1", ColorSchemeIndexValues::Accent1);
    this->Accent2 = new AttributeColorScheme("accent2", ColorSchemeIndexValues::Accent2);
    this->Accent3 = new AttributeColorScheme("accent3", ColorSchemeIndexValues::Accent3);
    this->Accent4 = new AttributeColorScheme("accent4", ColorSchemeIndexValues::Accent4);
    this->Accent5 = new AttributeColorScheme("accent5", ColorSchemeIndexValues::Accent5);
    this->Accent6 = new AttributeColorScheme("accent6", ColorSchemeIndexValues::Accent6);
    this->Background1 = new AttributeColorScheme("bg1", ColorSchemeIndexValues::Light1);
    this->Background2 = new AttributeColorScheme("bg2", ColorSchemeIndexValues::Light2);
    this->FollowedHyperlink = new AttributeColorScheme("folHlink", ColorSchemeIndexValues::FollowedHyperlink);
    this->Hyperlink = new AttributeColorScheme("hlink", ColorSchemeIndexValues::Hyperlink);
    this->Text1 = new AttributeColorScheme("tx1", ColorSchemeIndexValues::Dark1);
    this->Text2 = new AttributeColorScheme("tx2", ColorSchemeIndexValues::Dark2);
    this->AddAttribute(this->Background1);
    this->AddAttribute(this->Text1);
    this->AddAttribute(this->Background2);
    this->AddAttribute(this->Text2);
    this->AddAttribute(this->Accent1);
    this->AddAttribute(this->Accent2);
    this->AddAttribute(this->Accent3);
    this->AddAttribute(this->Accent4);
    this->AddAttribute(this->Accent5);
    this->AddAttribute(this->Accent6);
    this->AddAttribute(this->Hyperlink);
    this->AddAttribute(this->FollowedHyperlink);
}
