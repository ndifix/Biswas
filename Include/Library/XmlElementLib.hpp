#ifndef XML_ELEMENT_LIB_HPP
#define XML_ELEMENT_LIB_HPP

#include <Library/XmlBaseLib.hpp>
#include <string>

namespace xmlElm {

class Relationships : public XmlRootElement {
private:
public:
    inline Relationships() : XmlRootElement("Relationships") {};
    virtual void Write(std::ofstream &ofs) const override;
};

class Presentation : public XmlRootElement {
private:
public:
    inline Presentation() : XmlRootElement("presentation") {};
    virtual void Write(std::ofstream &ofs) const override;
};

}

#endif
