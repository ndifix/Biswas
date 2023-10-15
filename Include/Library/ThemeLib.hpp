#ifndef THEME_LIB_HPP
#define THEME_LIB_HPP

#include <string>
#include <Biswas.hpp>
#include <Library/PartLib.hpp>

class ThemePart : public IPart {
private:
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
