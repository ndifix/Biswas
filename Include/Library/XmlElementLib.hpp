#ifndef XML_ELEMENT_LIB_HPP
#define XML_ELEMENT_LIB_HPP

#include <Biswas.hpp>
#include <Library/XmlBaseLib.hpp>
#include <list>
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

class SlideMasterList : public XmlElement {
private:
public:
    inline SlideMasterList() : XmlElement("sldMasterIdLst", xmlns::presenta) {};
};

class SlideSize : public XmlElement {
private:
public:
    uint32_t Cx = 0;
    uint32_t Cy = 0;
    inline SlideSize() : XmlElement("sldSz", xmlns::presenta) {};
    virtual void Write (std::ofstream &ofs) final override;
};

}

#endif
