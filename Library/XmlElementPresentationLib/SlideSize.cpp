#include <Library/XmlElementPresentationLib/SlideSize.hpp>

using namespace OpenXml::Presentation;

SlideSize::SlideSize (
    ) : XmlElement("sldSz", xmlns::presenta)
{
    this->Cx = new AttributeInt32("cx", 0);
    this->Cy = new AttributeInt32("cy", 0);
    this->AddAttribute(this->Cx);
    this->AddAttribute(this->Cy);
}

