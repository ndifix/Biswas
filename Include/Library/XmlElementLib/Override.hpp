#pragma once

#include <Library/XmlBaseLib.hpp>

namespace OpenXml {

class Override : public XmlElement {
private:
public:
    AttributeString *PartName;
    AttributeString *ContentType;
    Override();
};

}
