#include <Library/XmlElementLib.hpp>

using namespace OpenXml::Presentation;

SlideMasterId::SlideMasterId (
    ) : XmlElement("sldMasterId", xmlns::presenta)
{
    this->Id = new Attribute("id");
    this->RelationshipId = new Attribute("id", xmlns::relation);
    this->AddAttribute(this->Id);
    this->AddAttribute(this->RelationshipId);
}
