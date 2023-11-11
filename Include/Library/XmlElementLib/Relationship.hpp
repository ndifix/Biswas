#pragma once

#include <Library/XmlBaseLib.hpp>

namespace OpenXml {

class Relationship : public XmlElement {
private:
public:
    Attribute *Id;
    Attribute *Type;
    Attribute *Target;
    Relationship();
};

}
