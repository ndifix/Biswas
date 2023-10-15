#include <Library/PresentationLib.hpp>
#include <Library/XmlFileLib.hpp>

namespace {
const char *relType = "http://schemas.openxmlformats.org/officeDocument/2006/relationships/presProps";
const char *conType = "application/vnd.openxmlformats-officedocument.presentationml.presProps+xml";
}

PresentationPropertiesPart::PresentationPropertiesPart (
    const std::string &root,
    std::string dir
    ) : IPart(root, dir, relType, conType)
{
    this->xmlfile = new xmlFile::PresentationProperties(root + dir + "presProps.xml");
}

Status
PresentationPropertiesPart::Write(
    )
{
    if (this->xmlfile == nullptr) {
        return Status::NotReady;
    }

    this->xmlfile->Write();
    return Status::Success;
}
