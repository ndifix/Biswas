#pragma once

#include <Library/XmlBaseLib.hpp>
#include <Library/XmlElementLib/SystemColor.hpp>

namespace OpenXml::Drawing {

class Light1Color : public XmlElement {
private:
    SystemColor *systemColor;
public:
    Light1Color();
};

}
