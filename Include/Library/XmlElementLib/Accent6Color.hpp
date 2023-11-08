#ifndef XML_ELEMENT_LIB_Accent6Color
#define XML_ELEMENT_LIB_Accent6Color

#include <Library/XmlBaseLib.hpp>
#include <Library/XmlElementLib/RgbColorModelHex.hpp>

namespace OpenXml::Drawing {

class Accent6Color : public XmlElement {
private:
    RgbColorModelHex *rgbColorModelHex;
public:
    Accent6Color();
};

}

#endif
