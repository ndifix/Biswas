#ifndef XML_BASE_LIB_HPP
#define XML_BASE_LIB_HPP

#include <fstream>
#include <string>
#include <vector>

class XmlElement {
private:
    const std::string tagName;
    std::vector<XmlElement*> childs;
public:
    XmlElement (
        const char *tag
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
