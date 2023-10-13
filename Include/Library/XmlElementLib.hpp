#ifndef XML_ELEMENT_LIB_HPP
#define XML_ELEMENT_LIB_HPP

#include <Library/XmlBaseLib.hpp>
#include <string>

class XmlRelationships : public XmlElement {
private:
public:
    inline XmlRelationships() : XmlElement("Relationships") {};
    virtual void Write(std::ofstream &ofs) const override;
};

#endif
