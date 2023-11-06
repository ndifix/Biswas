#ifndef XML_ELEMENT_LIB_ColorScheme
#define XML_ELEMENT_LIB_ColorScheme

#include <Library/XmlBaseLib.hpp>

namespace xmlElm {

class ColorScheme : public XmlElement {
private:
public:
    Attribute *Name;
    ColorScheme();
};

}

#endif
