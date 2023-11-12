#pragma once

#include <Library/XmlBaseLib.hpp>
#include <Library/XmlElementLib/RgbColorModelHex.hpp>

namespace OpenXml::Drawing {

class Light2Color : public XmlElement {
private:
    RgbColorModelHex *rgbColorModelHex;
public:
    Light2Color();
};

}