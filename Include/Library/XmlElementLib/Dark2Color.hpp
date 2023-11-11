#pragma once

#include <Library/XmlBaseLib.hpp>
#include <Library/XmlElementLib/RgbColorModelHex.hpp>

namespace OpenXml::Drawing {

class Dark2Color : public XmlElement {
private:
    RgbColorModelHex *rgbColorModelHex;
public:
    Dark2Color();
};

}
