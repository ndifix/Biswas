#pragma once

#include <Library/XmlBaseLib.hpp>

namespace OpenXml::Drawing {

class BodyProperties : public XmlElement {
private:
public:
    inline BodyProperties() : XmlElement("bodyPr", xmlns::drawingm) {};
};

}
