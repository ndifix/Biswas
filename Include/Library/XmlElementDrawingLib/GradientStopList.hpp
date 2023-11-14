#pragma once

#include <Library/XmlBaseLib.hpp>

namespace OpenXml::Drawing {

class GradientStopList : public XmlElement {
private:
public:
    inline GradientStopList() : XmlElement("gsLst", xmlns::drawingm) {};
};

}
