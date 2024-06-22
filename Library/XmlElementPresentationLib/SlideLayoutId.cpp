#include <Library/XmlElementPresentationLib/SlideLayoutId.hpp>

using namespace OpenXml::Presentation;

SlideLayoutId::SlideLayoutId (
    ) : XmlElement("sldLayoutId", xmlns::presenta)
{
    this->Id = new AttributeUint32("id");
    this->RelationshipId = new AttributeString("id", xmlns::relation);
    this->AddAttribute(this->Id);
    this->AddAttribute(this->RelationshipId);
}
