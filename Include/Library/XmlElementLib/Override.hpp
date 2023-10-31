#ifndef XML_ELEMENT_LIB_OVERRIDE
#define XML_ELEMENT_LIB_OVERRIDE

#include <Library/XmlBaseLib.hpp>

namespace xmlElm {

class Override : public XmlElement {
private:
public:
    Attribute *PartName;
    Attribute *ContentType;
    Override();
};

}

#endif
