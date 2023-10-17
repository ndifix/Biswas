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
    Presentation(const std::filesystem::path &path);
};

class PresentationProperties : public XmlFile {
private:
public:
    PresentationProperties(const std::filesystem::path &path);
};

class Theme : public XmlFile {
private:
public:
    Theme(const std::filesystem::path &path);
};

class SlideMaster : public XmlFile {
private:
public:
    SlideMaster(const std::filesystem::path &path);
};

}

#endif
