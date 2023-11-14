#pragma once

#include <Library/XmlBaseLib.hpp>

namespace OpenXml::Drawing {

class Outline : public XmlElement {
private:
public:
    inline Outline() : XmlElement("ln", xmlns::drawingm) {};
};

}
