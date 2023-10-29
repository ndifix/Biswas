#include <Library/XmlBaseLib.hpp>

XmlRootElement::XmlRootElement (
    const char *tag,
    const xmlns::XmlNameSpace &xmlns
    ) : XmlElement(tag, xmlns)
{
}

void
XmlRootElement::Write (
    std::ofstream &ofs
    )
{
    ofs << '<' << this->xmlnsSelf.signature << ':' << this->tagName;

    ofs << " xmlns:" << this->xmlnsSelf.signature << '='
        << '"' << this->xmlnsSelf.nameSpace << '"';

    for (auto &attr:this->attributes) {
        attr->Write(ofs);
    }
    ofs << '>';

    for (auto& child:this->childs) {
        child->Write(ofs);
    }

    ofs << "</" << this->xmlnsSelf.signature << ':' << this->tagName << ">";
}
