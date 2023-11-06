#ifndef XML_ELEMENT_LIB_RgbColorModelHex
#define XML_ELEMENT_LIB_RgbColorModelHex

#include <Library/XmlBaseLib.hpp>

namespace xmlElm {

class RgbColorModelHex  : public XmlElement {
private:
public:
    Attribute *Val;
    RgbColorModelHex ();
};

}

#endif
