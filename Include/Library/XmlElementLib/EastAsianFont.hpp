#ifndef XML_ELEMENT_LIB_EastAsianFont
#define XML_ELEMENT_LIB_EastAsianFont

#include <Library/XmlBaseLib.hpp>

namespace OpenXml::Drawing {

class EastAsianFont : public XmlElement {
private:
public:
    Attribute *Typeface;
    EastAsianFont();
};

}

#endif
