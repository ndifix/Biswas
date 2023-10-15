#include <Library/PartLib.hpp>
#include <Library/XmlFileLib.hpp>

namespace {
const char *relType = "http://schemas.openxmlformats.org/officeDocument/2006/relationships/theme";
const char *conType = "application/vnd.openxmlformats-officedocument.theme+xml";
}

ThemePart::ThemePart (
    const std::string &root,
    std::string dir
    ) : IPart(root, dir, relType, conType)
{
    this->xmlfile = new xmlFile::Theme(root + dir + "theme1.xml");
}

Status
ThemePart::Write (
    )
{
    if (this->xmlfile == nullptr) {
        return Status::NotReady;
    }

    this->xmlfile->Write();
    return Status::Success;
}
