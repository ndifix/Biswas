#pragma once

#include <Library/XmlBaseLib.hpp>

namespace OpenXml::Drawing {

class Extents : public XmlElement {
private:
public:
    Attribute *Cx;
    Attribute *Cy;
    Extents();
};

}
