#pragma once

#include <Library/XmlBaseLib.hpp>

namespace OpenXml::Drawing {

class GradientFill : public XmlElement {
private:
public:
    inline GradientFill() : XmlElement("gradFill", xmlns::drawingm) {};
};

}
