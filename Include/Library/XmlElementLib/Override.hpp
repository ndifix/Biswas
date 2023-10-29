#ifndef XML_ELEMENT_LIB_OVERRIDE
#define XML_ELEMENT_LIB_OVERRIDE

#include <Library/XmlBaseLib.hpp>

namespace xmlElm {

class Override : public XmlElement {
private:
public:
    std::shared_ptr<Attribute> PartName;
    std::shared_ptr<Attribute> ContentType;
    Override();
};

}

#endif
