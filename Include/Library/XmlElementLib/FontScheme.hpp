#ifndef XML_ELEMENT_LIB_FontScheme
#define XML_ELEMENT_LIB_FontScheme

#include <Library/XmlBaseLib.hpp>

namespace xmlElm {

class FontScheme : public XmlElement {
private:
public:
    Attribute *Name;
    FontScheme();
};

}

#endif
