#include <Library/XmlBaseLib.hpp>

#include <fstream>

XmlElement::XmlElement (
    const char *tag,
    xmlns::XmlNameSpace &xmlns
    ) : tagName(tag),
        xmlnsSelf(xmlns)
{
}

void
XmlElement::NotifyAddChildElement (
    const xmlns::XmlNameSpace &xmlns
    )
{
    this->childNameSpace.insert(xmlns);
    if (this->parent->childNameSpace.count(xmlns) != 0) {
        return;
    }

    this->parent->NotifyAddChildElement(xmlns);
}

void
XmlElement::NotifyNameSpaceSignature (
    const xmlns::XmlNameSpace &xmlns,
    const char signature
    )
{
    for (auto &child:this->childs) {
        if (child->xmlnsSelf == xmlns) {
            child->xmlnsSelf.signature = signature;
        }

        if (child->childNameSpace.count(xmlns) != 0) {
            child->NotifyNameSpaceSignature(xmlns, signature);
        }
    }
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
    this->NotifyAddChildElement(child->xmlnsSelf);
}

void
XmlElement::Write (
    std::ofstream &ofs
    ) const
{
    ofs << '<';
    if (this->xmlnsSelf.signature != xmlns::emptystrSign) {
        ofs << this->xmlnsSelf.signature << ':';
    }
    ofs << this->tagName;
    for (auto &attr:this->attributes) {
        ofs << ' ' << attr.first << "=\"" << attr.second << '\"';
    }
    ofs << '>';

    for (auto& child:this->childs) {
        child->Write(ofs);
    }

    ofs << "</" << this->tagName << ">";
}
