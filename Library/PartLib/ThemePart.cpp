#include <Library/PartLib.hpp>
#include <Library/XmlFileLib.hpp>

namespace {
const char *relType = "http://schemas.openxmlformats.org/officeDocument/2006/relationships/theme";
const char *conType = "application/vnd.openxmlformats-officedocument.theme+xml";
}

ThemePart::ThemePart (
    const std::filesystem::path &presDir,
    const std::filesystem::path &filename
    ) : IPart(std::filesystem::path(presDir) /= "theme", relType, conType)
{
    this->RootElement.reset(new OpenXml::Drawing::Theme());
    this->xmlfile.reset(
        new xmlFile::Theme(
            std::filesystem::path(this->partDir) /= filename,
            this->RootElement
        ));
}
