#ifndef XML_FILE_LIB_HPP
#define XML_FILE_LIB_HPP

#include <Library/XmlBaseLib.hpp>
#include <Library/XmlElementLib.hpp>

namespace xmlFile {

class ContentTypes : public XmlFile {
private:
public:
    ContentTypes(std::string path);
};

class Relationships : public XmlFile {
private:
public:
    Relationships(std::string path);
};

class Presentation : public XmlFile {
private:
public:
    Presentation(std::string path);
};

class PresentationProperties : public XmlFile {
private:
public:
    PresentationProperties(std::string path);
};

class Theme : public XmlFile {
private:
public:
    Theme(std::string path);
};

class SlideMaster : public XmlFile {
private:
public:
    SlideMaster(std::string path);
};

}

#endif
