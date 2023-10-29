#ifndef XML_ELEMENT_LIB_NOTESSIZE
#define XML_ELEMENT_LIB_NOTESSIZE

#include <Library/XmlBaseLib.hpp>

namespace xmlElm {

class NotesSize : public XmlElement {
private:
    std::shared_ptr<Attribute> CxAttr;
    std::shared_ptr<Attribute> CyAttr;
public:
    uint32_t Cx = 0;
    uint32_t Cy = 0;
    NotesSize();
    virtual void Write (std::ofstream &ofs) final override;
};

}

#endif
