#include <Library/PackagingLib/PresentationPart.hpp>
#include <Library/XmlRootElementLib.hpp>

using namespace OpenXml::Packaging;

namespace {
const char *contentType = "application/vnd.openxmlformats-officedocument.presentationml.presentation.main+xml";
const char *relationshipType = "http://schemas.openxmlformats.org/officeDocument/2006/relationships/officeDocument";
}

PresentationPart::PresentationPart (
    OpenXmlPackage *openXmlPackage
    ) : OpenXmlPart(
            contentType,
            openXmlPackage,
            relationshipType,
            new Presentation::Presentation,
            "ppt"
            )
{
}
