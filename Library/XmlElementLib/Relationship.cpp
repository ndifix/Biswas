#include <Library/XmlElementLib.hpp>

using namespace xmlElm;

Relationship::Relationship (
    ) : XmlElement("Relationship", xmlns::relation)
{
    this->Id.reset(new Attribute("Id"));
    this->Type.reset(new Attribute("Type"));
    this->Target.reset(new Attribute("Target"));
    this->AddAttribute(this->Id);
    this->AddAttribute(this->Type);
    this->AddAttribute(this->Target);
}
