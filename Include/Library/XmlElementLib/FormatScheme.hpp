#ifndef XML_ELEMENT_LIB_FormatScheme
#define XML_ELEMENT_LIB_FormatScheme

#include <Library/XmlBaseLib.hpp>

namespace xmlElm {

class FormatScheme : public XmlElement {
private:
public:
    Attribute *Name;
    FormatScheme();
};

}

#endif
