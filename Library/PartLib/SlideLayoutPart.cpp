#include <Library/PartLib.hpp>
#include <Library/XmlFileLib.hpp>

namespace {
const char *relType = "http://schemas.openxmlformats.org/officeDocument/2006/relationships/slideLayout";
const char *conType = "application/vnd.openxmlformats-officedocument.presentationml.slideLayout+xml";
}

SlideLayoutPart::SlideLayoutPart (
    const std::filesystem::path &presDir,
    const std::filesystem::path &filename
    ) : IPart(std::filesystem::path(presDir) /= "slideLayouts", relType, conType)
{
    this->RootElement.reset(new OpenXml::Presentation::SlideLayout());
    this->xmlfile.reset(
        new xmlFile::SlideLayout(
            std::filesystem::path(this->partDir) /= filename,
            this->RootElement
        ));
}
