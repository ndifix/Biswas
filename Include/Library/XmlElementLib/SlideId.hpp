#pragma once

#include <Library/XmlBaseLib.hpp>

namespace OpenXml::Presentation {

class SlideId : public XmlElement {
private:
public:
    Attribute *Id;
    Attribute *RelationshipId;
    SlideId();
};

}
