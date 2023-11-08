#include <Library/XmlBaseLib.hpp>

#include <fstream>
#include <iostream>

XmlElement::XmlElement (
    const char *tag,
    const xmlns::XmlNameSpace &xmlns
    ) : tagName(tag),
        xmlnsSelf(xmlns)
{
    this->childNameSpace.insert(xmlns);
}

void
XmlElement::UpdateChildNameSpace (
    )
{
    for (auto &child:this->childs) {
        child->UpdateChildNameSpace();
        for (auto xmlns:child->childNameSpace) {
            this->childNameSpace.insert(xmlns);
        }
    }

    for (auto &attr:this->attributes) {
        if (!(attr->xmlns == xmlns::pereleme)) {
            this->childNameSpace.insert(attr->xmlns);
        }
    }
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
    XmlElement *child
    )
{
    this->childs.push_back(std::unique_ptr<XmlElement>(child));
}

void
XmlElement::AddChildElement (
    std::unique_ptr<XmlElement> child
    )
{
    this->childs.push_back(std::move(child));
}

void
XmlElement::Write (
    std::ofstream &ofs,
    bool useSignature
    )
{
    ofs << '<';
    if (useSignature) {
        ofs << this->xmlnsSelf.signature << ':';
    }
    ofs << this->tagName;

    for (auto &attr:this->attributes) {
        attr->Write(ofs);
    }

    if (this->childs.empty()) {
        ofs << "/>";
        return;
    }

    ofs << '>';

    for (auto& child:this->childs) {
        child->Write(ofs, useSignature);
    }

    ofs << "</";
    if (useSignature) {
        ofs << this->xmlnsSelf.signature << ':';
    }
    ofs << this->tagName << ">";
}
