#pragma once

#include <Library/XmlBaseLib.hpp>

namespace OpenXml {

class Default : public XmlElement {
private:
public:
    Attribute *Extension;
    Attribute *ContentType;
    Default();
};

}
