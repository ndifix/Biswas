#include <Library/XmlBaseLib.hpp>
#include <Library/XmlFileLib.hpp>

void
XmlRelationships::Write (
    std::ofstream &ofs
    ) const
{
    ofs << '<' << this->tagName
        << " xmlns=\"" << "http://schemas.openxmlformats.org/package/2006/relationships" << '\"'
        << '>';
    for (auto &child:childs) {
        child->Write(ofs);
    }
    ofs << "</" << this->tagName << '>';
}

Relationships::Relationships (
    )
{
    this->RootElement = new XmlRelationships();
}
