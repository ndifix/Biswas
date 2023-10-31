#include <Library/XmlElementLib.hpp>

using namespace xmlElm;

SlideMasterId::SlideMasterId (
    uint32_t id,
    std::string rid
    ) : XmlElement("sldMasterId", xmlns::presenta)
{
    this->Id = new Attribute("id");
    this->RelationshipId = new Attribute("id", xmlns::relation);
    this->Id->val = std::to_string(id);
    this->RelationshipId->val = rid;
    this->AddAttribute(this->Id);
    this->AddAttribute(this->RelationshipId);
}
