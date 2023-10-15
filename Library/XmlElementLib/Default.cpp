#include <Library/XmlElementLib.hpp>

using namespace xmlElm;

void
Default::Write (
    std::ofstream &ofs
    )
{
    if (!this->Extension.empty()) {
        this->AddAttribute("Extension", this->Extension);
    }
    if (!this->ContentType.empty()) {
        this->AddAttribute("ContentType", this->ContentType);
    }
    XmlElement::Write(ofs);
}
