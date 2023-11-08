#ifndef XML_ELEMENT_LIB_Accent5Color
#define XML_ELEMENT_LIB_Accent5Color

#include <Library/XmlBaseLib.hpp>
#include <Library/XmlElementLib/RgbColorModelHex.hpp>

namespace OpenXml::Drawing {

class Accent5Color : public XmlElement {
private:
    RgbColorModelHex *rgbColorModelHex;
public:
    Accent5Color();
};

}

#endif
