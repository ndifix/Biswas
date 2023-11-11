#pragma once

#include <Library/XmlBaseLib.hpp>

namespace OpenXml::Presentation {

class NotesSize : public XmlElement {
private:
    Attribute *CxAttr;
    Attribute *CyAttr;
public:
    uint32_t Cx = 0;
    uint32_t Cy = 0;
    NotesSize();
    virtual void Write (std::ofstream &ofs, bool sign) final override;
};

}
