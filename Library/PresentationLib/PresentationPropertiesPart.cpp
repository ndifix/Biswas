#include <Library/PresentationLib.hpp>

namespace {
const char *relType = "http://schemas.openxmlformats.org/officeDocument/2006/relationships/presProps";
const char *conType = "application/vnd.openxmlformats-officedocument.presentationml.presProps+xml";
}

PresentationPropertiesPart::PresentationPropertiesPart (
    const std::string &root,
    std::string dir
    ) : IPart(root, dir, relType, conType),
        presentationProperties(root + dir + "presProps.xml")
{
}

Status
PresentationPropertiesPart::Write(
    )
{
    this->presentationProperties.Write();
    return Status::Success;
}
