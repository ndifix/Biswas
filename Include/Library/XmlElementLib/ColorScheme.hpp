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
#include <Library/XmlElementLib/Dark2Color.hpp>
#include <Library/XmlElementLib/FollowedHyperlinkColor.hpp>
#include <Library/XmlElementLib/Hyperlink.hpp>
#include <Library/XmlElementLib/Light1Color.hpp>
#include <Library/XmlElementLib/Light2Color.hpp>

namespace OpenXml::Drawing {

class ColorScheme : public XmlElement {
private:
    Accent1Color *accent1Color;
    Accent2Color *accent2Color;
    Accent3Color *accent3Color;
    Accent4Color *accent4Color;
    Accent5Color *accent5Color;
    Accent6Color *accent6Color;
    Dark1Color *dark1Color;
    Dark2Color *dark2Color;
    FollowedHyperlinkColor *followedHyperlinkColor;
    Hyperlink *hyperlink;
    Light1Color*light1Color;
    Light2Color*light2Color;
public:
    Attribute *Name;
    ColorScheme();
};

}

#endif
