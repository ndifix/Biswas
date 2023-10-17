#include <Library/PartLib.hpp>
#include <Library/XmlFileLib.hpp>

namespace {
const char *relType = "http://schemas.openxmlformats.org/officeDocument/2006/relationships/theme";
const char *conType = "application/vnd.openxmlformats-officedocument.theme+xml";
}

ThemePart::ThemePart (
    const std::filesystem::path &dir
    ) : IPart(dir, relType, conType)
{
    this->xmlfile.reset(new xmlFile::Theme(std::filesystem::path(dir) /= "theme1.xml"));
}
