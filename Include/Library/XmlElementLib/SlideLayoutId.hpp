#pragma once

#include <Library/XmlBaseLib.hpp>

namespace OpenXml::Presentation {

class SlideLayoutId : public XmlElement {
private:
public:
    Attribute *Id;
    Attribute *RelationshipId;
    SlideLayoutId();
};

}
