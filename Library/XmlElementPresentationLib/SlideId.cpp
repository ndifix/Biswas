#include <Library/XmlElementPresentationLib.hpp>

using namespace OpenXml::Presentation;

SlideId::SlideId (
    ) : XmlElement("sldId", xmlns::presenta)
{
    this->Id = new AttributeUint32("id");
    this->RelationshipId = new AttributeString("id", xmlns::relation);
    this->AddAttribute(this->Id);
    this->AddAttribute(this->RelationshipId);
}
