#ifndef XML_ELEMENT_LIB_MinorFont
#define XML_ELEMENT_LIB_MinorFont

#include <Library/XmlBaseLib.hpp>
#include <Library/XmlElementLib/EastAsianFont.hpp>
#include <Library/XmlElementLib/MinorFont.hpp>

namespace OpenXml::Drawing {

class MinorFont : public XmlElement {
private:
    EastAsianFont *eastAsianFont;
    LatinFont *latinFont;
public:
    MinorFont();
};

}

#endif
