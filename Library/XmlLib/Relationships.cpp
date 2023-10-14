#include <Library/XmlBaseLib.hpp>
#include <Library/XmlFileLib.hpp>

using namespace xmlElm;

void
Relationship::Write (
    std::ofstream &ofs
    )
{
    if (!this->Id.empty()) {
        this->AddAttribute("Id", this->Id);
    }
    if (!this->Type.empty()) {
        this->AddAttribute("Type", this->Type);
    }
    if (!this->Target.empty()) {
        this->AddAttribute("Target", this->Target);
    }

    XmlElement::Write(ofs);
}

xmlFile::Relationships::Relationships (
    std::string path
    ) : XmlFile(path)
{
    this->RootElement = new xmlElm::Relationships();
}

Status
Relationships::AddRelation (
    Relationship *relation
    )
{
    this->AddChildElement(relation);

    return Status::Success;
}
