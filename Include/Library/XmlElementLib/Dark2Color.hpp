#ifndef XML_ELEMENT_LIB_Dark2Color
#define XML_ELEMENT_LIB_Dark2Color

#include <Library/XmlBaseLib.hpp>
#include <Library/XmlElementLib/RgbColorModelHex.hpp>

namespace xmlElm {

class Dark2Color : public XmlElement {
private:
    RgbColorModelHex *rgbColorModelHex;
public:
    Dark2Color();
};

}

#endif
