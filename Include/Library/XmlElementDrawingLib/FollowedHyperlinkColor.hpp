#pragma once

#include <Library/XmlBaseLib.hpp>
#include <Library/XmlElementDrawingLib/RgbColorModelHex.hpp>

namespace OpenXml::Drawing {

class FollowedHyperlinkColor : public XmlElement {
private:
    RgbColorModelHex *rgbColorModelHex;
public:
    FollowedHyperlinkColor();
};

}
