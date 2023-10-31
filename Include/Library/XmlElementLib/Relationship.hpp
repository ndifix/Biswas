#ifndef XML_ELEMENT_LIB_RELATIONSHIP
#define XML_ELEMENT_LIB_RELATIONSHIP

#include <Library/XmlBaseLib.hpp>

namespace xmlElm {

class Relationship : public XmlElement {
private:
public:
    Attribute *Id;
    Attribute *Type;
    Attribute *Target;
    Relationship();
};

}

#endif
