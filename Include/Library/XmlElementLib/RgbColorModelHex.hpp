#ifndef XML_ELEMENT_LIB_RgbColorModelHex
#define XML_ELEMENT_LIB_RgbColorModelHex

#include <Library/XmlBaseLib.hpp>

namespace OpenXml::Drawing {

class RgbColorModelHex  : public XmlElement {
private:
public:
    Attribute *Val;
    RgbColorModelHex ();
};

}

#endif
