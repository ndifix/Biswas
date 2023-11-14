#pragma once

#include <Library/XmlBaseLib.hpp>

namespace OpenXml::Drawing {

class ChildExtents : public XmlElement {
private:
public:
    Attribute *Cx;
    Attribute *Cy;
    ChildExtents();
};

}
