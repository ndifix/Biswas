#ifndef XML_FILE_LIB_HPP
#define XML_FILE_LIB_HPP

#include <Library/XmlBaseLib.hpp>

namespace xmlFile {

class ContentTypes : public XmlFile {
private:
public:
    ContentTypes(const std::filesystem::path &path);
};

class Relationships : public XmlFile {
private:
public:
    Relationships(const std::filesystem::path &path);
};

class Presentation : public XmlFile {
private:
public:
    inline Presentation(const std::filesystem::path &path, std::shared_ptr<XmlRootElement> root) : XmlFile(path, root) {};
};

class PresentationProperties : public XmlFile {
private:
public:
    inline PresentationProperties(const std::filesystem::path &path, std::shared_ptr<XmlRootElement> root) : XmlFile(path, root) {};
};

class Theme : public XmlFile {
private:
public:
    inline Theme(const std::filesystem::path &path, std::shared_ptr<XmlRootElement> root) : XmlFile(path, root) {};
};

class SlideMaster : public XmlFile {
private:
public:
    inline SlideMaster(const std::filesystem::path &path, std::shared_ptr<XmlRootElement> root) : XmlFile(path, root) {};
};

}

#endif
