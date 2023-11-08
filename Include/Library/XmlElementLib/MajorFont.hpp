#ifndef XML_ELEMENT_LIB_MajorFont
#define XML_ELEMENT_LIB_MajorFont

#include <Library/XmlBaseLib.hpp>
#include <Library/XmlElementLib/EastAsianFont.hpp>
#include <Library/XmlElementLib/LatinFont.hpp>

namespace OpenXml::Drawing {

class MajorFont : public XmlElement {
private:
    EastAsianFont *eastAsianFont;
    LatinFont *latinFont;
public:
    MajorFont();
};

}

#endif
