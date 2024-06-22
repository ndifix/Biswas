#include <Library/XmlElementPresentationLib/SlideMasterId.hpp>

using namespace OpenXml::Presentation;

SlideMasterId::SlideMasterId (
    ) : XmlElement("sldMasterId", xmlns::presenta)
{
    this->Id = new AttributeUint32("id");
    this->RelationshipId = new AttributeString("id", xmlns::relation);
    this->AddAttribute(this->Id);
    this->AddAttribute(this->RelationshipId);
}
