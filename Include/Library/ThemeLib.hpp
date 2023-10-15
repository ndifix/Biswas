#ifndef THEME_LIB_HPP
#define THEME_LIB_HPP

#include <string>
#include <Biswas.hpp>
#include <Library/XmlFileLib.hpp>

class ThemePart {
private:
    xmlFile::Theme theme;
public:
    const std::string rootDir;
    const std::string partDir;

    ThemePart (
        const std::string &root,
        std::string dir
        );

    Status
    Write (
        ) const;
};

#endif
