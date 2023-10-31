#include <Library/XmlBaseLib.hpp>

#include <fstream>
#include <iostream>

XmlElement::XmlElement (
    const char *tag,
    const xmlns::XmlNameSpace &xmlns
    ) : tagName(tag),
        xmlnsSelf(xmlns)
{
}

void
XmlElement::AddAttribute (
    Attribute *attr
    )
{
    this->attributes.push_back(std::unique_ptr<Attribute>(attr));
}

void
XmlElement::AddChildElement (
    std::shared_ptr<XmlElement> child
    )
{
    this->childs.push_back(child);
}

void
XmlElement::Write (
    std::ofstream &ofs
    )
{
    ofs << '<' << this->xmlnsSelf.signature << ':' << this->tagName;
    for (auto &attr:this->attributes) {
        attr->Write(ofs);
    }

    if (this->childs.empty()) {
        ofs << "/>";
        return;
    }

    ofs << '>';

    for (auto& child:this->childs) {
        child->Write(ofs);
    }

    ofs << "</" << this->xmlnsSelf.signature << ':' << this->tagName << ">";
}
