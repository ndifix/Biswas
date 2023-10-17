#ifndef XML_ROOT_ELEMENT_LIB_HPP
#define XML_ROOT_ELEMENT_LIB_HPP

#include <memory>
#include <Biswas.hpp>
#include <Library/XmlBaseLib.hpp>
#include <Library/XmlElementLib.hpp>

namespace xmlElm {

class Types : public XmlRootElement {
private:
public:
    inline Types() : XmlRootElement("Types", xmlns::content_) {};
    Status AddContentType(std::unique_ptr<Default>);
    Status AddContentType(std::unique_ptr<Override>);
};

class Relationships : public XmlRootElement {
private:
public:
    inline Relationships() : XmlRootElement("Relationships", xmlns::relation) {};
    Status AddRelation(std::unique_ptr<Relationship>);
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

class SlideMaster : public XmlRootElement {
private:
public:
    inline SlideMaster() : XmlRootElement("sldMaster", xmlns::presenta) {};
};

}

#endif
