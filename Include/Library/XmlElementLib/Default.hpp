#ifndef XML_ELEMENT_LIB_DEFAULT
#define XML_ELEMENT_LIB_DEFAULT

#include <Library/XmlBaseLib.hpp>

namespace xmlElm {

class Default : public XmlElement {
private:
public:
    Attribute *Extension;
    Attribute *ContentType;
    Default();
};

}

#endif
