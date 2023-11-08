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

    ofs << '<';
    if (this->childNameSpace.size() > 1) {
        ofs << this->xmlnsSelf.signature << ':';
    }
    ofs << this->tagName;

    if (this->childNameSpace.size() > 1) {
        for (auto &cns:this->childNameSpace) {
            ofs << " xmlns:" << cns.signature << '=' << '"' << cns.nameSpace << '"';
        }
    } else {
        for (auto &cns:this->childNameSpace) {
            ofs << " xmlns" << '=' << '"' << cns.nameSpace << '"';
        }
    }

    for (auto &attr:this->attributes) {
        attr->Write(ofs);
    }
    ofs << '>';

    for (auto& child:this->childs) {
        child->Write(ofs, this->childNameSpace.size() > 1);
    }

    ofs << "</";
    if (this->childNameSpace.size() > 1) {
        ofs << this->xmlnsSelf.signature << ':';
    }
    ofs << this->tagName << ">";
}
