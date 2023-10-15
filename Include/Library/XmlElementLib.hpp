#ifndef XML_ELEMENT_LIB_HPP
#define XML_ELEMENT_LIB_HPP

#include <Biswas.hpp>
#include <Library/XmlBaseLib.hpp>
#include <string>

namespace xmlElm {


class Default : public XmlElement {
private:
public:
    std::string Extension;
    std::string ContentType;
    inline Default() : XmlElement("Default", xmlns::content_) {};
    virtual void Write (std::ofstream &ofs) final override;
};

class Override : public XmlElement {
private:
public:
    std::string PartName;
    std::string ContentType;
    inline Override() : XmlElement("Override", xmlns::content_) {};
    virtual void Write (std::ofstream &ofs) final override;
};

class Relationship : public XmlElement {
private:
public:
    std::string Id;
    std::string Type;
    std::string Target;

    inline Relationship() : XmlElement("Relationship", xmlns::relation) {};
    virtual void Write (std::ofstream &ofs) final override;
};

class Types : public XmlRootElement {
private:
public:
    inline Types() : XmlRootElement("Types", xmlns::content_) {};
    Status AddContentType(Default *);
    Status AddContentType(Override *);
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

class PresentationProperties : public XmlRootElement {
private:
public:
    inline PresentationProperties() : XmlRootElement("presentationPr", xmlns::presenta) {};
};

class Theme : public XmlRootElement {
private:
public:
    inline Theme() : XmlRootElement("theme", xmlns::drawingm) {};
};

}

#endif
