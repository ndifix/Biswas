#pragma once

#include <Library/XmlBaseLib.hpp>
#include <Library/XmlElementDrawingLib/RgbColorModelHex.hpp>

namespace OpenXml::Drawing {

class Accent3Color : public XmlElement {
private:
    RgbColorModelHex *rgbColorModelHex;
public:
    Accent3Color();
};

}
