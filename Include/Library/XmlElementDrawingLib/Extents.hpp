#pragma once

#include <Library/XmlBaseLib.hpp>

namespace OpenXml::Drawing {

class Extents : public XmlElement {
private:
public:
    AttributeInt64 *Cx;
    AttributeInt64 *Cy;
    Extents();
};

}
