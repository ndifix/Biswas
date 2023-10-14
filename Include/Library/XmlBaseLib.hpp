#ifndef XML_BASE_LIB_HPP
#define XML_BASE_LIB_HPP

#include <fstream>
#include <string>
#include <vector>
#include <utility>

class XmlElement {
protected:
    const std::string tagName;
    std::vector<std::pair<std::string, std::string>> attributes;

    XmlElement *parent;
    std::vector<XmlElement*> childs;
public:
    XmlElement (
        const char *tag
        );

    void
    AddAttribute (
        std::string &key,
        std::string &val
        );

    void
    AddChildElement (
        XmlElement *child
        );

    virtual
    void
    Write (
        std::ofstream &ofs
        ) const;
};

class XmlRootElement : public XmlElement {
private:
public:
    XmlRootElement(const char *tag);
};

class XmlFile {
private:
    std::string
    Declare (
        ) const;
public:
    XmlRootElement *RootElement = nullptr;

    ~XmlFile();

    void
    Write (
        std::string path
        ) const;
};

#endif
