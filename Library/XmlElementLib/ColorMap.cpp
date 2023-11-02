#include <Library/XmlElementLib.hpp>

using namespace xmlElm;

ColorMap::ColorMap (
    ) : XmlElement("clrMap", xmlns::presenta)
{
    this->Accent1 = new Attribute("accent1");
    this->Accent2 = new Attribute("accent2");
    this->Accent3 = new Attribute("accent3");
    this->Accent4 = new Attribute("accent4");
    this->Accent5 = new Attribute("accent5");
    this->Accent6 = new Attribute("accent6");
    this->Background1 = new Attribute("bg1");
    this->Background2 = new Attribute("bg2");
    this->FollowedHyperlink = new Attribute("folHlink");
    this->Hyperlink = new Attribute("hlink");
    this->Text1 = new Attribute("tx1");
    this->Text2 = new Attribute("tx2");
    this->Accent1->val = "accent1";
    this->Accent2->val = "accent2";
    this->Accent3->val = "accent3";
    this->Accent4->val = "accent4";
    this->Accent5->val = "accent5";
    this->Accent6->val = "accent6";
    this->Background1->val = "lt1";
    this->Background2->val = "lt2";
    this->FollowedHyperlink->val = "folHlink";
    this->Hyperlink->val = "hlink";
    this->Text1->val = "dk1";
    this->Text2->val = "dk2";
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
