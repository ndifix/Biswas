#pragma once

#include <Library/XmlBaseLib.hpp>

namespace OpenXml::Presentation {

class SlideId : public XmlElement {
private:
public:
    AttributeUint32 *Id;
    Attribute *RelationshipId;
    SlideId();
};

}
