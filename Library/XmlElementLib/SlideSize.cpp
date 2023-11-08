#include <Biswas.hpp>
#include <Library/XmlElementLib.hpp>

using namespace OpenXml::Presentation;

SlideSize::SlideSize (
    ) : XmlElement("sldSz", xmlns::presenta)
{
    this->CxAttr = new Attribute("cx");
    this->CyAttr = new Attribute("cy");
    this->AddAttribute(this->CxAttr);
    this->AddAttribute(this->CyAttr);
}

void
SlideSize::Write (
    std::ofstream &ofs,
    bool sign
    )
{
    this->CxAttr->val = std::to_string(this->Cx);
    this->CyAttr->val = std::to_string(this->Cy);
    XmlElement::Write(ofs, sign);
}
