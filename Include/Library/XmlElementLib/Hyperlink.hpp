#ifndef XML_ELEMENT_LIB_Hyperlink
#define XML_ELEMENT_LIB_Hyperlink

#include <Library/XmlBaseLib.hpp>
#include <Library/XmlElementLib/RgbColorModelHex.hpp>

namespace OpenXml::Drawing {

class Hyperlink : public XmlElement {
private:
    RgbColorModelHex *rgbColorModelHex;
public:
    Hyperlink();
};

}

#endif