#pragma once

#include <Library/XmlBaseLib.hpp>

namespace OpenXml::Drawing {

class ChildExtents : public XmlElement {
private:
public:
    AttributeInt64 *Cx;
    AttributeInt64 *Cy;
    ChildExtents();
};

}
