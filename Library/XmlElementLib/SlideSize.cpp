#include <Biswas.hpp>
#include <Library/XmlElementLib.hpp>

using namespace xmlElm;

SlideSize::SlideSize (
    ) : XmlElement("sldSz", xmlns::presenta)
{
    this->CxAttr.reset(new Attribute("cx"));
    this->CyAttr.reset(new Attribute("cy"));
    this->AddAttribute(this->CxAttr);
    this->AddAttribute(this->CyAttr);
}

void
SlideSize::Write (
    std::ofstream &ofs
    )
{
    this->CxAttr->val = std::to_string(this->Cx);
    this->CyAttr->val = std::to_string(this->Cy);
    XmlElement::Write(ofs);
}
