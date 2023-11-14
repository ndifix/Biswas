#pragma once

#include <Library/XmlBaseLib.hpp>
#include <Library/XmlElementDrawingLib/GradientStop.hpp>

namespace OpenXml::Drawing {

class GradientStopList : public XmlElement {
private:
public:
    GradientStop *gradientStop1;
    GradientStop *gradientStop2;
    GradientStop *gradientStop3;

    GradientStopList();
};

}
