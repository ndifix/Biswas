#pragma once

#include <Library/XmlBaseLib.hpp>

namespace OpenXml::Drawing {

class SolidFill : public XmlElement {
private:
public:
    inline SolidFill() : XmlElement("solidFill", xmlns::drawingm) {};
};

}
