#include <Library/XmlElementLib.hpp>

using namespace xmlElm;

void
Override::Write (
    std::ofstream &ofs
    )
{
    if (!this->PartName.empty()) {
        this->AddAttribute("PartName", this->PartName);
    }
    if (!this->ContentType.empty()) {
        this->AddAttribute("ContentType", this->ContentType);
    }
    XmlElement::Write(ofs);
}
