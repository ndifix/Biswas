#ifndef XML_ELEMENT_LIB_Accent1Color
#define XML_ELEMENT_LIB_Accent1Color

#include <Library/XmlBaseLib.hpp>
#include <Library/XmlElementLib/RgbColorModelHex.hpp>

namespace OpenXml::Drawing {

class Accent1Color : public XmlElement {
private:
    RgbColorModelHex *rgbColorModelHex;
public:
    Accent1Color();
};

}

#endif
