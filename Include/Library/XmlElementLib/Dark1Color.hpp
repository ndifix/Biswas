#ifndef XML_ELEMENT_LIB_Dark1Color
#define XML_ELEMENT_LIB_Dark1Color

#include <Library/XmlBaseLib.hpp>
#include <Library/XmlElementLib/SystemColor.hpp>

namespace xmlElm {

class Dark1Color : public XmlElement {
private:
    SystemColor *systemColor;
public:
    Dark1Color();
};

}

#endif
