#pragma once

#include <Library/XmlBaseLib.hpp>

namespace OpenXml::Drawing {

class NoAutoFit : public XmlElement {
private:
public:
    inline NoAutoFit() : XmlElement("noAutofit", xmlns::drawingm) {};
};

}
