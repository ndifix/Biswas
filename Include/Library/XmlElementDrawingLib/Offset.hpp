#pragma once

#include <Library/XmlBaseLib.hpp>

namespace OpenXml::Drawing {

class Offset : public XmlElement {
private:
public:
    AttributeInt64 *X;
    AttributeInt64 *Y;
    Offset();
};

}
