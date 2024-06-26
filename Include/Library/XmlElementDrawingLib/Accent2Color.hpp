#pragma once

#include <Library/XmlBaseLib.hpp>
#include <Library/XmlElementDrawingLib/RgbColorModelHex.hpp>

namespace OpenXml::Drawing {

class Accent2Color : public XmlElement {
private:
    RgbColorModelHex *rgbColorModelHex;
public:
    Accent2Color();
};

}
