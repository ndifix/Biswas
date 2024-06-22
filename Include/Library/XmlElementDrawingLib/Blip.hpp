#pragma once

#include <Library/XmlBaseLib.hpp>

namespace OpenXml::Drawing {

class Blip : public XmlElement {
private:
public:
    AttributeString *embed;
    Blip();
};

}
