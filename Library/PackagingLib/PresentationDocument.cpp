#include <Library/PackagingLib/PresentationDocument.hpp>

using namespace OpenXml::Packaging;

PresentationDocument::PresentationDocument (
    ) : OpenXmlPackage(new PresentationPart(this))
{
    this->presentationPart = static_cast<PresentationPart *>(this->rootPart.get());
}
