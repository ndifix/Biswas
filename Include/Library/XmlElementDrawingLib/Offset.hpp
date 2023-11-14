#pragma once

#include <Library/XmlBaseLib.hpp>

namespace OpenXml::Drawing {

class Offset : public XmlElement {
private:
public:
    Attribute *X;
    Attribute *Y;
    Offset();
};

}
