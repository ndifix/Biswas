#ifndef XML_ELEMENT_LIB_Light1Color
#define XML_ELEMENT_LIB_Light1Color

#include <Library/XmlBaseLib.hpp>
#include <Library/XmlElementLib/SystemColor.hpp>

namespace xmlElm {

class Light1Color : public XmlElement {
private:
    SystemColor *systemColor;
public:
    Light1Color();
};

}

#endif
