#pragma once

#include <Library/XmlBaseLib.hpp>

namespace OpenXml::Presentation {

class SlideMasterId : public XmlElement {
private:
public:
    AttributeUint32 *Id;
    AttributeString *RelationshipId;
    SlideMasterId();
};

}
