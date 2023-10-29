#ifndef XML_ELEMENT_LIB_DEFAULT
#define XML_ELEMENT_LIB_DEFAULT

#include <Library/XmlBaseLib.hpp>

namespace xmlElm {

class Default : public XmlElement {
private:
public:
    std::shared_ptr<Attribute> Extension;
    std::shared_ptr<Attribute> ContentType;
    Default();
};

}

#endif
