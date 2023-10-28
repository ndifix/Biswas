#include <Library/XmlBaseLib.hpp>

XmlRootElement::XmlRootElement (
    const char *tag,
    xmlns::XmlNameSpace &xmlns
    ) : XmlElement(tag, xmlns)
{
    this->parent = nullptr;
}

void
XmlRootElement::NotifyAddChildElement (
    const xmlns::XmlNameSpace &xmlns
    )
{
    if (this->xmlnsSelf == xmlns || this->childNameSpace.count(xmlns) != 0) {
        return;
    }

    this->NotifyNameSpaceSignature(
        this->xmlnsSelf,
        GetSignature(this->xmlnsSelf)
        );
    this->NotifyNameSpaceSignature(
        xmlns,
        GetSignature(xmlns)
        );
}

void
XmlRootElement::NotifyNameSpaceSignature (
    const xmlns::XmlNameSpace &xmlns,
    const char signature
    )
{
    if (this->xmlnsSelf == xmlns) {
        this->xmlnsSelf.signature = signature;
    }

    for (auto &child:this->childs) {
        child->NotifyNameSpaceSignature(
            xmlns,
            signature
            );
    }
}

void
XmlRootElement::Write (
    std::ofstream &ofs
    )
{
    ofs << '<';
    if (this->xmlnsSelf.signature != xmlns::emptystrSign) {
        ofs << this->xmlnsSelf.signature << ':';
    }
    ofs << this->tagName;

    // 自身と全子孫を含め名前空間が1つのみの場合とそうでない場合を考慮する
    if (this->childNameSpace.size() == 0) {
        ofs << " xmlns="
            << '"' << this->xmlnsSelf.nameSpace << '"';
    } else if (this->childNameSpace.size() == 1 && this->childNameSpace.count(this->xmlnsSelf) != 0) {
        ofs << " xmlns="
            << '"' << this->xmlnsSelf.nameSpace << '"';
    } else {
        ofs << " xmlns:" << this->xmlnsSelf.signature << '='
            << '"' << this->xmlnsSelf.nameSpace << '"';
        for (auto &cns:this->childNameSpace) {
            ofs << " xmlns:" << cns.signature << '='
            << '"' << cns.nameSpace << '"';
        }
    }

    for (auto &attr:this->attributes) {
        attr->Write(ofs);
    }
    ofs << '>';

    for (auto& child:this->childs) {
        child->Write(ofs);
    }

    ofs << "</" << this->tagName << ">";
}
