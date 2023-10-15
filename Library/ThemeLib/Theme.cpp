#include <Library/ThemeLib.hpp>

Theme::Theme (
    std::string dir
    ) : themeDir(dir),
        theme(dir + "theme1.xml")
{
}

Status
Theme::Write (
    ) const
{
    this->theme.Write();
    return Status::Success;
}
