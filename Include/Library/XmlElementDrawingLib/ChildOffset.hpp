#pragma once

#include <Library/XmlBaseLib.hpp>

namespace OpenXml::Drawing {

class ChildOffset : public XmlElement {
private:
public:
    Attribute *X;
    Attribute *Y;
    ChildOffset();
};

}
