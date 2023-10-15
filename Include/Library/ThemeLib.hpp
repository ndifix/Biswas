#ifndef THEME_LIB_HPP
#define THEME_LIB_HPP

#include <string>
#include <Biswas.hpp>
#include <Library/PartLib.hpp>
#include <Library/XmlFileLib.hpp>

class ThemePart : public IPart {
private:
    xmlFile::Theme theme;
public:
    ThemePart (
        const std::string &root,
        std::string dir
        );

    Status
    Write (
        ) final override;
};

#endif
