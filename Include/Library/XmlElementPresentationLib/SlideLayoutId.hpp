#pragma once

#include <Library/XmlBaseLib.hpp>

namespace OpenXml::Presentation {

class SlideLayoutId : public XmlElement {
private:
public:
    AttributeUint32 *Id;
    AttributeString *RelationshipId;
    SlideLayoutId();
};

}
