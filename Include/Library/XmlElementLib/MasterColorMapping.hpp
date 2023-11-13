#pragma once

#include <Library/XmlBaseLib.hpp>

namespace OpenXml::Drawing {

class MasterColorMapping : public XmlElement {
private:
public:
    inline MasterColorMapping() : XmlElement("masterClrMapping", xmlns::drawingm) {};
};

}
