#include <Library/XmlElementLib.hpp>

using namespace OpenXml;

Relationship::Relationship (
    ) : XmlElement("Relationship", xmlns::relpack_)
{
    this->Id = new AttributeString("Id");
    this->Type = new AttributeString("Type");
    this->Target = new AttributeString("Target");
    this->AddAttribute(this->Id);
    this->AddAttribute(this->Type);
    this->AddAttribute(this->Target);
}
