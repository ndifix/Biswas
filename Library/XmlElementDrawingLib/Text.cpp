#include <Library/XmlElementDrawingLib.hpp>

using namespace OpenXml::Drawing;

void
Text::Write (
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
    ofs << '>';

    ofs << this->text;

    ofs << "</";
    if (useSignature) {
        ofs << this->xmlnsSelf.signature << ':';
    }
    ofs << this->tagName << ">";
}
