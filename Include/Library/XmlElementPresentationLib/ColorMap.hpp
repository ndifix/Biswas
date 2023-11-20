#pragma once

#include <Library/XmlBaseLib.hpp>

namespace OpenXml::Presentation {

class ColorMap : public XmlElement {
private:
public:
    AttributeColorScheme *Accent1;
    AttributeColorScheme *Accent2;
    AttributeColorScheme *Accent3;
    AttributeColorScheme *Accent4;
    AttributeColorScheme *Accent5;
    AttributeColorScheme *Accent6;
    AttributeColorScheme *Background1;
    AttributeColorScheme *Background2;
    AttributeColorScheme *FollowedHyperlink;
    AttributeColorScheme *Hyperlink;
    AttributeColorScheme *Text1;
    AttributeColorScheme *Text2;
    ColorMap();
};

}
