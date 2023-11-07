#ifndef XML_ELEMENT_LIB_ColorScheme
#define XML_ELEMENT_LIB_ColorScheme

#include <Library/XmlBaseLib.hpp>
#include <Library/XmlElementLib/Accent1Color.hpp>
#include <Library/XmlElementLib/Accent2Color.hpp>
#include <Library/XmlElementLib/Accent3Color.hpp>
#include <Library/XmlElementLib/Accent4Color.hpp>
#include <Library/XmlElementLib/Accent5Color.hpp>
#include <Library/XmlElementLib/Accent6Color.hpp>
#include <Library/XmlElementLib/Dark1Color.hpp>

namespace xmlElm {

class ColorScheme : public XmlElement {
private:
    Accent1Color *accent1Color;
    Accent2Color *accent2Color;
    Accent3Color *accent3Color;
    Accent4Color *accent4Color;
    Accent5Color *accent5Color;
    Accent6Color *accent6Color;
    Dark1Color *dark1Color;
public:
    Attribute *Name;
    ColorScheme();
};

}

#endif
