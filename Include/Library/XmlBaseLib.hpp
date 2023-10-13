#ifndef XML_BASE_LIB_HPP
#define XML_BASE_LIB_HPP

#include <fstream>
#include <string>
#include <vector>
#include <utility>

class XmlElement {
private:
    const std::string tagName;
    std::vector<std::pair<std::string, std::string>> attributes;
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

    void
    Write (
        std::ofstream &ofs
        ) const;
};

class XmlFile {
private:
    std::string
    Declare (
        ) const;
public:
    XmlElement *RootElement;

    void
    Write (
        std::string path
        ) const;
};

#endif
