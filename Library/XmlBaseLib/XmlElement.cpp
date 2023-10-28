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
    std::shared_ptr<Attribute> &attr
    )
{
    this->attributes.push_back(attr);
}

void
XmlElement::AddChildElement (
    std::shared_ptr<XmlElement> child
    )
{
    child->parent = this;
    this->NotifyAddChildElement(child->xmlnsSelf);
    this->childs.push_back(child);
}

void
XmlElement::Write (
    std::ofstream &ofs
    )
{
    ofs << '<';
    if (this->xmlnsSelf.signature != xmlns::emptystrSign) {
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
        child->Write(ofs);
    }

    ofs << "</" << this->tagName << ">";
}
