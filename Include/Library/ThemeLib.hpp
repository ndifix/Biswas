#ifndef THEME_LIB_HPP
#define THEME_LIB_HPP

#include <string>
#include <Biswas.hpp>
#include <Library/XmlFileLib.hpp>

class Theme {
private:
    xmlFile::Theme theme;
public:
    const std::string themeDir;

    Theme (
        std::string dir
        );

    Status
    Write (
        ) const;
};

#endif
