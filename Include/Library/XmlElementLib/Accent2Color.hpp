#ifndef XML_ELEMENT_LIB_Accent2Color
#define XML_ELEMENT_LIB_Accent2Color

#include <Library/XmlBaseLib.hpp>
#include <Library/XmlElementLib/RgbColorModelHex.hpp>

namespace OpenXml::Drawing {

class Accent2Color : public XmlElement {
private:
    RgbColorModelHex *rgbColorModelHex;
public:
    Accent2Color();
};

}

#endif
