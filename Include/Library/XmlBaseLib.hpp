#pragma once

#include <filesystem>
#include <fstream>
#include <list>
#include <memory>
#include <set>
#include <string>
#include <utility>
#include <Library/UtilType.hpp>

namespace xmlns {

struct XmlNameSpace {
    char signature;
    const char *nameSpace;
};
bool operator==(const XmlNameSpace &lhs, const XmlNameSpace &rhs);
bool operator<(const XmlNameSpace &lhs, const XmlNameSpace &rhs);

extern const XmlNameSpace content_;
extern const XmlNameSpace relpack_;
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
    Attribute (const char *key, const char *val);
    Attribute (const char *key, const xmlns::XmlNameSpace &xmlns);
    void virtual Write (std::ofstream &ofs);
};

template<class T>
class AttributeNullable : public Attribute {
private:
public:
    Nullable<T> value;
    inline AttributeNullable (const char *key) : Attribute(key) {};
    inline AttributeNullable (const char *key, const T val) : Attribute(key) { this->value = val; };
    void virtual Write (std::ofstream &ofs) override;
};
using AttributeBool = AttributeNullable<bool>;
using AttributeColorScheme = AttributeNullable<ColorSchemeIndexValues>;

class XmlElement {
protected:
    const std::string tagName;
    const xmlns::XmlNameSpace xmlnsSelf;
    std::list<std::unique_ptr<Attribute>> attributes;

    std::list<std::unique_ptr<XmlElement>> childs;
    // 自身と全子孫に含まれる名前空間の一覧
    std::set<xmlns::XmlNameSpace> childNameSpace;

    /**
     * 自身と全子孫に含まれる名前空間情報を更新する
     */
    void
    UpdateChildNameSpace (
        );
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
        XmlElement *child
        );
    void
    AddChildElement (
        std::unique_ptr<XmlElement> child
        );

    virtual
    void
    Write (
        std::ofstream &ofs,
        bool useSignature
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
        );
};

class XmlFile {
private:
    std::string
    Declare (
        ) const;
public:
    const std::filesystem::path filePath;
    std::shared_ptr<XmlRootElement> RootElement;

    XmlFile (
        const std::filesystem::path &filePath,
        std::shared_ptr<XmlRootElement> root
        );

    void
    Write (
        ) const;
};
