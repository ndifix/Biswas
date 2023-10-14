#ifndef XML_ELEMENT_LIB_HPP
#define XML_ELEMENT_LIB_HPP

#include <Library/XmlBaseLib.hpp>
#include <string>

namespace xmlElm {

class Relationships : public XmlElement {
private:
public:
    inline Relationships() : XmlElement("Relationships") {};
    virtual void Write(std::ofstream &ofs) const override;
};

}

#endif
