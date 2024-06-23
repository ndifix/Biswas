#include <Library/PackagingLib/PresentationDocument.hpp>

using namespace OpenXml::Packaging;

PresentationDocument::PresentationDocument (
    )
{
    this->presentationPart = new PresentationPart(this);
    this->rootPart.reset(this->presentationPart);
    this->AddPart(this->rootPart);
}
