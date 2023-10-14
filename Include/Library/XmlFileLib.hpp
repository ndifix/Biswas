#ifndef XML_FILE_LIB_HPP
#define XML_FILE_LIB_HPP

#include <Library/XmlBaseLib.hpp>
#include <Library/XmlElementLib.hpp>

namespace xmlFile {

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

}

#endif
