#ifndef XML_ELEMENT_LIB_RELATIONSHIP
#define XML_ELEMENT_LIB_RELATIONSHIP

#include <Library/XmlBaseLib.hpp>

namespace xmlElm {

class Relationship : public XmlElement {
private:
public:
    std::shared_ptr<Attribute> Id;
    std::shared_ptr<Attribute> Type;
    std::shared_ptr<Attribute> Target;
    Relationship();
};

}

#endif
