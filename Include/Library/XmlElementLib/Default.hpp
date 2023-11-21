#pragma once

#include <Library/XmlBaseLib.hpp>

namespace OpenXml {

class Default : public XmlElement {
private:
public:
    AttributeString *Extension;
    AttributeString *ContentType;
    Default();
};

}
