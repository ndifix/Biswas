#ifndef XML_ELEMENT_LIB_HPP
#define XML_ELEMENT_LIB_HPP

#include <Biswas.hpp>
#include <Library/XmlBaseLib.hpp>
#include <string>

namespace xmlElm {

class Relationship : public XmlElement {
private:
public:
    std::string Id;
    std::string Type;
    std::string Target;

    inline Relationship() : XmlElement("Relationship", xmlns::relation) {};
    virtual void Write (std::ofstream &ofs) final override;
};

class Relationships : public XmlRootElement {
private:
public:
    inline Relationships() : XmlRootElement("Relationships", xmlns::relation) {};
    Status AddRelation(Relationship *);
};

class Presentation : public XmlRootElement {
private:
public:
    inline Presentation() : XmlRootElement("presentation", xmlns::presenta) {};
};

}

#endif
