#include <Library/PartLib.hpp>
#include <Library/XmlFileLib.hpp>

namespace {
const char *relType = "http://schemas.openxmlformats.org/officeDocument/2006/relationships/presProps";
const char *conType = "application/vnd.openxmlformats-officedocument.presentationml.presProps+xml";
}

PresentationPropertiesPart::PresentationPropertiesPart (
    const std::filesystem::path &presDir
    ) : IPart(presDir, relType, conType)
{
    this->RootElement.reset(new OpenXml::Presentation::PresentationProperties());
    this->xmlfile.reset(
        new xmlFile::PresentationProperties(
            presDir / "presProps.xml",
            this->RootElement
        ));
}
