#pragma once

#include <Library/XmlBaseLib.hpp>

namespace OpenXml::Presentation {

class SlideLayoutId : public XmlElement {
private:
public:
    AttributeUint32 *Id;
    Attribute *RelationshipId;
    SlideLayoutId();
};

}
