#pragma once

#include <Library/XmlBaseLib.hpp>
#include <Library/XmlElementDrawingLib/RgbColorModelHex.hpp>

namespace OpenXml::Drawing {

class Accent4Color : public XmlElement {
private:
    RgbColorModelHex *rgbColorModelHex;
public:
    Accent4Color();
};

}
