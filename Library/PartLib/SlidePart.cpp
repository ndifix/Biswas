#include <Library/PartLib.hpp>
#include <Library/XmlFileLib.hpp>

namespace {
const char *relType = "http://schemas.openxmlformats.org/officeDocument/2006/relationships/slide";
const char *conType = "application/vnd.openxmlformats-officedocument.presentationml.slide+xml";
}

SlidePart::SlidePart (
    const std::filesystem::path &presDir,
    const std::filesystem::path &filename
    ) : IPart(presDir / "slides", relType, conType)
{
    this->RootElement.reset(new OpenXml::Presentation::Slide());
    this->xmlfile.reset(
        new xmlFile::Slide(
            this->partDir / filename,
            this->RootElement
        ));
}
