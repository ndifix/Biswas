#pragma once

#include <Library/XmlBaseLib.hpp>

namespace OpenXml::Drawing {

class ChildOffset : public XmlElement {
private:
public:
    AttributeInt64 *X;
    AttributeInt64 *Y;
    ChildOffset();
};

}
