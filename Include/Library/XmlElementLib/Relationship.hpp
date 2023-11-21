#pragma once

#include <Library/XmlBaseLib.hpp>

namespace OpenXml {

class Relationship : public XmlElement {
private:
public:
    AttributeString *Id;
    AttributeString *Type;
    AttributeString *Target;
    Relationship();
};

}
