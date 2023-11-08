#ifndef XML_ELEMENT_LIB_FontScheme
#define XML_ELEMENT_LIB_FontScheme

#include <Library/XmlBaseLib.hpp>

namespace OpenXml::Drawing {

class FontScheme : public XmlElement {
private:
public:
    Attribute *Name;
    FontScheme();
};

}

#endif
