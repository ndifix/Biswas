#pragma once

#include <Library/XmlBaseLib.hpp>

namespace OpenXml::Presentation {

class SlideMasterId : public XmlElement {
private:
    Attribute *Id;
public:
    Attribute *RelationshipId;
    SlideMasterId(uint32_t id, std::string rid);
};

}
