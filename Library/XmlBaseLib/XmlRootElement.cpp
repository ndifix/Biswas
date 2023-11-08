#include <Library/XmlBaseLib.hpp>

XmlRootElement::XmlRootElement (
    const char *tag,
    const xmlns::XmlNameSpace &xmlns
    ) : XmlElement(tag, xmlns)
{
    this->childNameSpace.insert(xmlns);
}

void
XmlRootElement::Write (
    std::ofstream &ofs
    )
{
    this->UpdateChildNameSpace();

    ofs << '<' << this->xmlnsSelf.signature << ':' << this->tagName;

    for (auto &cns:this->childNameSpace) {
        ofs << " xmlns:" << cns.signature << '=' << '"' << cns.nameSpace << '"';
    }

    for (auto &attr:this->attributes) {
        attr->Write(ofs);
    }
    ofs << '>';

    for (auto& child:this->childs) {
        child->Write(ofs);
    }

    ofs << "</" << this->xmlnsSelf.signature << ':' << this->tagName << ">";
}
