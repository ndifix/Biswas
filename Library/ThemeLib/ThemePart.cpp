#include <Library/ThemeLib.hpp>

namespace {
const char *relType = "http://schemas.openxmlformats.org/officeDocument/2006/relationships/theme";
const char *conType = "application/vnd.openxmlformats-officedocument.theme+xml";
}

ThemePart::ThemePart (
    const std::string &root,
    std::string dir
    ) : IPart(root, dir, relType, conType),
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
