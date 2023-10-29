#ifndef XML_ELEMENT_LIB_SLIDEMASTERID
#define XML_ELEMENT_LIB_SLIDEMASTERID

#include <Library/XmlBaseLib.hpp>

namespace xmlElm {

class SlideMasterId : public XmlElement {
private:
    std::shared_ptr<Attribute> Id;
public:
    std::shared_ptr<Attribute> RelationshipId;
    SlideMasterId(uint32_t id, std::string rid);
};

}

#endif
