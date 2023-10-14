#ifndef PRESENTATION_LIB_HPP
#define PRESENTATION_LIB_HPP

#include <string>
#include <Biswas.hpp>
#include <Library/XmlFileLib.hpp>

class Presentation {
private:
    xmlFile::Presentation presentation;
public:
    const std::string presDir;

    Presentation (
        std::string dir
        );

    Status
    Write (
        ) const;
};

#endif
