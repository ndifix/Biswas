#ifndef XML_ELEMENT_LIB_Accent4Color
#define XML_ELEMENT_LIB_Accent4Color

#include <Library/XmlBaseLib.hpp>
#include <Library/XmlElementLib/RgbColorModelHex.hpp>

namespace xmlElm {

class Accent4Color : public XmlElement {
private:
    RgbColorModelHex *rgbColorModelHex;
public:
    Accent4Color();
};

}

#endif
