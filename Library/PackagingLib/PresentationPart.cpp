#include <Library/PackagingLib/PresentationPart.hpp>
#include <Library/XmlFileLib.hpp>
#include <Library/XmlRootElementLib.hpp>

using namespace OpenXml::Packaging;

namespace {
const char *contentType = "application/vnd.openxmlformats-officedocument.presentationml.presentation.main+xml";
const char *relationshipType = "http://schemas.openxmlformats.org/officeDocument/2006/relationships/officeDocument";
}

PresentationPart::PresentationPart (
    ) : OpenXmlPart(
            contentType,
            relationshipType,
            new Presentation::Presentation,
            "ppt"
            )
{
    this->xmlfile.reset(
        new xmlFile::Presentation(
            this->uri / "presentation.xml",
            this->rootElement
        ));
}

void
PresentationPart::Write (
    ) const
{
    this->xmlfile->Write();
}
