#ifndef XML_ELEMENT_LIB_ColorScheme
#define XML_ELEMENT_LIB_ColorScheme

#include <Library/XmlBaseLib.hpp>
#include <Library/XmlElementLib/Accent1Color.hpp>
#include <Library/XmlElementLib/Accent2Color.hpp>

namespace xmlElm {

class ColorScheme : public XmlElement {
private:
    Accent1Color *accent1Color;
    Accent2Color *accent2Color;
public:
    Attribute *Name;
    ColorScheme();
};

}

#endif
