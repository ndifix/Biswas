#ifndef XML_ELEMENT_LIB_FollowedHyperlinkColor
#define XML_ELEMENT_LIB_FollowedHyperlinkColor

#include <Library/XmlBaseLib.hpp>
#include <Library/XmlElementLib/RgbColorModelHex.hpp>

namespace OpenXml::Drawing {

class FollowedHyperlinkColor : public XmlElement {
private:
    RgbColorModelHex *rgbColorModelHex;
public:
    FollowedHyperlinkColor();
};

}

#endif
