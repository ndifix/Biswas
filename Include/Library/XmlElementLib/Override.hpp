#pragma once

#include <Library/XmlBaseLib.hpp>

namespace OpenXml {

class Override : public XmlElement {
private:
public:
    Attribute *PartName;
    Attribute *ContentType;
    Override();
};

}
