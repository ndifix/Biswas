#ifndef XML_ELEMENT_LIB_Accent3Color
#define XML_ELEMENT_LIB_Accent3Color

#include <Library/XmlBaseLib.hpp>
#include <Library/XmlElementLib/RgbColorModelHex.hpp>

namespace xmlElm {

class Accent3Color : public XmlElement {
private:
    RgbColorModelHex *rgbColorModelHex;
public:
    Accent3Color();
};

}

#endif
