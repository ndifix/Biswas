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
    std::shared_ptr<Attribute> Extension;
    std::shared_ptr<Attribute> ContentType;
    Default();
};

class Override : public XmlElement {
private:
public:
    std::shared_ptr<Attribute> PartName;
    std::shared_ptr<Attribute> ContentType;
    Override();
};

class Relationship : public XmlElement {
private:
public:
    std::shared_ptr<Attribute> Id;
    std::shared_ptr<Attribute> Type;
    std::shared_ptr<Attribute> Target;
    Relationship();
};

class SlideMasterId : public XmlElement {
private:
    std::shared_ptr<Attribute> Id;
public:
    std::shared_ptr<Attribute> RelationshipId;
    SlideMasterId(uint32_t id, std::string rid);
};

class SlideMasterList : public XmlElement {
private:
    std::list<std::shared_ptr<SlideMasterId>> ids;
public:
    inline SlideMasterList() : XmlElement("sldMasterIdLst", xmlns::presenta) {};
    void AddId (uint32_t id, std::string rid);
};

class SlideSize : public XmlElement {
private:
    std::shared_ptr<Attribute> CxAttr;
    std::shared_ptr<Attribute> CyAttr;
public:
    uint32_t Cx = 0;
    uint32_t Cy = 0;
    SlideSize();
    virtual void Write (std::ofstream &ofs) final override;
};

class NotesSize : public XmlElement {
private:
    std::shared_ptr<Attribute> CxAttr;
    std::shared_ptr<Attribute> CyAttr;
public:
    uint32_t Cx = 0;
    uint32_t Cy = 0;
    NotesSize();
    virtual void Write (std::ofstream &ofs) final override;
};

class DefaultTextStyle : public XmlElement {
private:
public:
    inline DefaultTextStyle() : XmlElement("defaultTextStyle", xmlns::presenta) {};
};

class CommonSlideData : public XmlElement {
private:
public:
    inline CommonSlideData() : XmlElement("cSld", xmlns::presenta) {};
};

}

#endif
