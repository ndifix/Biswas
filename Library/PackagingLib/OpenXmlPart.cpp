#include <Library/PackagingLib/OpenXmlPart.hpp>

using namespace OpenXml::Packaging;

OpenXmlPart::OpenXmlPart (
    const std::string                contentType,
    const OpenXmlPackage            *openXmlPackage,
    const std::string                relationshipType,
    XmlRootElement                  *rootElement,
    const std::filesystem::path      uri
    ) : contentType(contentType),
        openXmlPackage(openXmlPackage),
        relationshipType(relationshipType),
        rootElement(rootElement),
        uri(uri)
{
}
