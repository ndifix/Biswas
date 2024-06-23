#include <Api/.Document.hpp>

using namespace biswas::dev;

Document::Document (
    )
{
    this->presentationDocument.reset(new OpenXml::Packaging::PresentationDocument);
}

void
Document::Dispose (
    ) const
{
    this->presentationDocument->Dispose();
}
