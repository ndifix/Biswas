#pragma once

#include <Library/XmlBaseLib.hpp>

namespace OpenXml::Presentation {

class SlideMasterId : public XmlElement {
private:
public:
    Attribute *Id;
    Attribute *RelationshipId;
    SlideMasterId();
};

}
