#pragma once

#include <Library/XmlBaseLib.hpp>
#include <Library/XmlElementDrawingLib/SystemColor.hpp>

namespace OpenXml::Drawing {

class Dark1Color : public XmlElement {
private:
    SystemColor *systemColor;
public:
    Dark1Color();
};

}
