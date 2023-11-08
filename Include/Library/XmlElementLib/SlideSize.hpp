#ifndef XML_ELEMENT_LIB_SLIDESIZE
#define XML_ELEMENT_LIB_SLIDESIZE

#include <Library/XmlBaseLib.hpp>

namespace OpenXml::Presentation {

class SlideSize : public XmlElement {
private:
    Attribute *CxAttr;
    Attribute *CyAttr;
public:
    uint32_t Cx = 0;
    uint32_t Cy = 0;
    SlideSize();
    virtual void Write (std::ofstream &ofs, bool sign) final override;
};

}

#endif
