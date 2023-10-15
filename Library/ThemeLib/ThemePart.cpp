#include <Library/ThemeLib.hpp>

ThemePart::ThemePart (
    const std::string &root,
    std::string dir
    ) : rootDir(root),
        partDir(dir),
        theme(root + dir + "theme1.xml")
{
}

Status
ThemePart::Write (
    ) const
{
    this->theme.Write();
    return Status::Success;
}
