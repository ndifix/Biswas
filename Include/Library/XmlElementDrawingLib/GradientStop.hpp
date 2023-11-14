#pragma once

#include <Library/XmlBaseLib.hpp>
#include <Library/XmlElementDrawingLib/SchemeColor.hpp>

namespace OpenXml::Drawing {

class GradientStop : public XmlElement {
private:
public:
    Attribute *Position;
    SchemeColor *schemeColor;
    GradientStop();
};

}
