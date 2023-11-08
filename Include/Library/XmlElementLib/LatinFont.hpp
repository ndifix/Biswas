#ifndef XML_ELEMENT_LIB_LatinFont
#define XML_ELEMENT_LIB_LatinFont

#include <Library/XmlBaseLib.hpp>

namespace OpenXml::Drawing {

class LatinFont : public XmlElement {
private:
public:
    Attribute *Typeface;
    LatinFont();
};

}

#endif
