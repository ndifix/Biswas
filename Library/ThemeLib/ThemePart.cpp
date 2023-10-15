#include <Library/ThemeLib.hpp>

ThemePart::ThemePart (
    const std::string &root,
    std::string dir
    ) : IPart(root, dir),
        theme(root + dir + "theme1.xml")
{
}

Status
ThemePart::Write (
    )
{
    this->theme.Write();
    return Status::Success;
}
