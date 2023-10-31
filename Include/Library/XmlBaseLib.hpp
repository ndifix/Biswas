#ifndef XML_BASE_LIB_HPP
#define XML_BASE_LIB_HPP

#include <filesystem>
#include <fstream>
#include <list>
#include <memory>
#include <set>
#include <string>
#include <utility>

namespace xmlns {

struct XmlNameSpace {
    char signature;
    const char *nameSpace;
};
bool operator==(const XmlNameSpace &lhs, const XmlNameSpace &rhs);
bool operator<(const XmlNameSpace &lhs, const XmlNameSpace &rhs);

extern const XmlNameSpace content_;
extern const XmlNameSpace drawingm;
extern const XmlNameSpace relation;
extern const XmlNameSpace presenta;
extern const XmlNameSpace pereleme;

}

class Attribute {
private:
    const char *key;
public:
    const xmlns::XmlNameSpace xmlns;
    std::string val;
    Attribute (const char *key);
    Attribute (const char *key, const xmlns::XmlNameSpace &xmlns);
    void Write (std::ofstream &ofs);
};

class XmlElement {
protected:
    const std::string tagName;
    const xmlns::XmlNameSpace xmlnsSelf;
    std::list<std::unique_ptr<Attribute>> attributes;

    std::list<std::shared_ptr<XmlElement>> childs;

public:
    XmlElement (
        const char *tag,
        const xmlns::XmlNameSpace &xmlns
        );

    void
    AddAttribute (
        Attribute *attr
        );

    void
    AddChildElement (
        std::shared_ptr<XmlElement> child
        );

    virtual
    void
    Write (
        std::ofstream &ofs
        );

friend class XmlRootElement;
};

class XmlRootElement : public XmlElement {
private:
public:
    XmlRootElement(
        const char *tag,
        const xmlns::XmlNameSpace &xmlns
        );


    void
    Write (
        std::ofstream &ofs
        ) final override;
};

class XmlFile {
private:
    std::string
    Declare (
        ) const;
public:
    const std::filesystem::path filePath;
    std::unique_ptr<XmlRootElement> RootElement;

    XmlFile (
        const std::filesystem::path &filePath
        );

    void
    Write (
        ) const;
};

#endif
