#include <Library/XmlElementPresentationLib.hpp>

using namespace OpenXml::Presentation;

SlideLayoutId::SlideLayoutId (
    ) : XmlElement("sldLayoutId", xmlns::presenta)
{
    this->Id = new AttributeUint32("id");
    this->RelationshipId = new Attribute("id", xmlns::relation);
    this->AddAttribute(this->Id);
    this->AddAttribute(this->RelationshipId);
}
