#include <Library/XmlElementLib.hpp>

using namespace OpenXml;

Relationship::Relationship (
    ) : XmlElement("Relationship", xmlns::relation)
{
    this->Id = new Attribute("Id");
    this->Type = new Attribute("Type");
    this->Target = new Attribute("Target");
    this->AddAttribute(this->Id);
    this->AddAttribute(this->Type);
    this->AddAttribute(this->Target);
}
