#ifndef XML_ELEMENT_LIB_ColorMap
#define XML_ELEMENT_LIB_ColorMap

#include <Library/XmlBaseLib.hpp>

namespace xmlElm {

class ColorMap : public XmlElement {
private:
public:
    Attribute *Accent1;
    Attribute *Accent2;
    Attribute *Accent3;
    Attribute *Accent4;
    Attribute *Accent5;
    Attribute *Accent6;
    Attribute *Background1;
    Attribute *Background2;
    Attribute *FollowedHyperlink;
    Attribute *Hyperlink;
    Attribute *Text1;
    Attribute *Text2;
    ColorMap();
};

}

#endif