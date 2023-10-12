#include <Library/XmlBaseLib.hpp>

#include <fstream>

XmlElement::XmlElement (
    const char *tag
    ) : tagName(tag)
{
}

void
XmlElement::Write (
    std::ofstream &ofs
    ) const
{
    ofs << "<" << this->tagName << ">";

    for (auto& child:this->childs) {
        child->Write(ofs);
    }

    ofs << "</" << this->tagName << ">";
}
