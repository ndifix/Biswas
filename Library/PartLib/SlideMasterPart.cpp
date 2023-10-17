#include <Library/PartLib.hpp>
#include <Library/XmlFileLib.hpp>

namespace {
const char *relType = "http://schemas.openxmlformats.org/officeDocument/2006/relationships/slideMaster";
const char *conType = "application/vnd.openxmlformats-officedocument.presentationml.slideMaster+xml";
}

SlideMasterPart::SlideMasterPart (
    const std::filesystem::path &dir
    ) : IPart(dir, relType, conType)
{
    this->xmlfile.reset(new xmlFile::SlideMaster(std::filesystem::path(dir) /= "slideMaster1.xml"));
}
