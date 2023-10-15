#include <Library/XmlElementLib.hpp>

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
