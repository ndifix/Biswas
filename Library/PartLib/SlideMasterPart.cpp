#include <Library/PartLib.hpp>
#include <Library/XmlFileLib.hpp>

namespace {
const char *relType = "http://schemas.openxmlformats.org/officeDocument/2006/relationships/slideMaster";
const char *conType = "application/vnd.openxmlformats-officedocument.presentationml.slideMaster+xml";
}

SlideMasterPart::SlideMasterPart (
    const std::string &root,
    std::string dir
    ) : IPart(root, dir, relType, conType)
{
    this->xmlfile = new xmlFile::SlideMaster(root + dir + "slideMaster1.xml");
}

Status
SlideMasterPart::Write (
    )
{
    if (this->xmlfile == nullptr) {
        return Status::NotReady;
    }

    this->xmlfile->Write();
    return Status::Success;
}
