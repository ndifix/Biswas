#include <Library/XmlBaseLib.hpp>
#include <Library/XmlFileLib.hpp>

using namespace xmlElm;

void
Presentation::Write (
    std::ofstream &ofs
    ) const
{
    ofs << '<' << this->tagName
        << '>';
    for (auto &child:childs) {
        child->Write(ofs);
    }
    ofs << "</" << this->tagName << '>';
}

xmlFile::Presentation::Presentation (
    )
{
    this->RootElement = new xmlElm::Presentation();
}
