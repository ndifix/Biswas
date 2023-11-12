#include <Library/XmlElementLib.hpp>

using namespace OpenXml::Presentation;

SlideMasterId::SlideMasterId (
    uint32_t id
    ) : XmlElement("sldMasterId", xmlns::presenta)
{
    this->Id = new Attribute("id");
    this->RelationshipId = new Attribute("id", xmlns::relation);
    this->Id->val = std::to_string(id);
    this->AddAttribute(this->Id);
    this->AddAttribute(this->RelationshipId);
}
