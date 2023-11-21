#pragma once

#include <Library/XmlBaseLib.hpp>
#include <Library/XmlElementDrawingLib/Accent1Color.hpp>
#include <Library/XmlElementDrawingLib/Accent2Color.hpp>
#include <Library/XmlElementDrawingLib/Accent3Color.hpp>
#include <Library/XmlElementDrawingLib/Accent4Color.hpp>
#include <Library/XmlElementDrawingLib/Accent5Color.hpp>
#include <Library/XmlElementDrawingLib/Accent6Color.hpp>
#include <Library/XmlElementDrawingLib/Dark1Color.hpp>
#include <Library/XmlElementDrawingLib/Dark2Color.hpp>
#include <Library/XmlElementDrawingLib/FollowedHyperlinkColor.hpp>
#include <Library/XmlElementDrawingLib/Hyperlink.hpp>
#include <Library/XmlElementDrawingLib/Light1Color.hpp>
#include <Library/XmlElementDrawingLib/Light2Color.hpp>

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
    AttributeString *Name;
    ColorScheme();
};

}
