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

extern const char emptystrSign;
extern const char content_Sign;
extern const char drawingmSign;
extern const char relationSign;
extern const char presentaSign;
extern const char *content_NS;
extern const char *drawingmNS;
extern const char *relationNS;
extern const char *presentaNS;
extern XmlNameSpace content_;
extern XmlNameSpace drawingm;
extern XmlNameSpace relation;
extern XmlNameSpace presenta;

}

class XmlElement {
protected:
    const std::string tagName;
    xmlns::XmlNameSpace xmlnsSelf;
    std::list<std::pair<std::string, std::string>> attributes;

    XmlElement *parent;
    std::list<std::unique_ptr<XmlElement>> childs;
    std::set<xmlns::XmlNameSpace> childNameSpace;

    /**
     * 子や子孫の要素に含まれる名前空間情報を更新する
    */
    virtual
    void
    NotifyAddChildElement (
        const xmlns::XmlNameSpace &xmlns
        );

    /**
     * 子や子孫の要素の名前空間の記号情報を更新する
    */
    virtual
    void
    NotifyNameSpaceSignature (
        const xmlns::XmlNameSpace &xmlns,
        const char signature
        );
public:
    XmlElement (
        const char *tag,
        xmlns::XmlNameSpace &xmlns
        );

    void
    AddAttribute (
        std::string key,
        std::string &val
        );

    void
    AddChildElement (
        std::unique_ptr<XmlElement> child
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
    /**
     * 子や子孫の要素に含まれる名前空間情報を更新する
    */
    virtual
    void
    NotifyAddChildElement (
        const xmlns::XmlNameSpace &xmlns
        ) override;

    /**
     * 子や子孫の要素の名前空間の記号情報を更新する
    */
    virtual
    void
    NotifyNameSpaceSignature (
        const xmlns::XmlNameSpace &xmlns,
        const char signature
        ) override;
public:
    XmlRootElement(
        const char *tag,
        xmlns::XmlNameSpace &xmlns
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
