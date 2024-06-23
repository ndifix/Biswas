#pragma once


#include <memory>
#include <Library/PackagingLib/PresentationDocument.hpp>

namespace biswas::dev {

class Document {
private:
    std::unique_ptr<OpenXml::Packaging::PresentationDocument> presentationDocument;

public:
    Document (
        );

    void
    Dispose (
        ) const;
};

}
