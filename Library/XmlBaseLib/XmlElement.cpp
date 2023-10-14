#include <Library/XmlBaseLib.hpp>

#include <fstream>

XmlElement::XmlElement (
    const char *tag
    ) : tagName(tag)
{
}

void
XmlElement::AddAttribute (
    std::string &key,
    std::string &val
    )
{
    this->attributes.push_back(
        std::make_pair(key, val)
        );
}

void
XmlElement::AddChildElement (
    XmlElement *child
    )
{
    this->childs.push_back(child);
    child->parent = this;
}

void
XmlElement::Write (
    std::ofstream &ofs
    ) const
{
    ofs << '<' << this->tagName;
    for (auto &attr:this->attributes) {
        ofs << ' ' << attr.first << "=\"" << attr.second << '\"';
    }
    ofs << '>';

    for (auto& child:this->childs) {
        child->Write(ofs);
    }

    ofs << "</" << this->tagName << ">";
}
