#include <Library/PackagingLib/OpenXmlPartContainer.hpp>

using namespace OpenXml::Packaging;

OpenXmlPart::OpenXmlPart (
    const std::string                contentType,
    const std::string                relationshipType,
    XmlRootElement                  *rootElement,
    const std::filesystem::path      uri
    ) : contentType(contentType),
        relationshipType(relationshipType),
        rootElement(rootElement),
        uri(uri)
{
}
