#ifndef DOCUMENT_LIB_HPP
#define DOCUMENT_LIB_HPP

#include <filesystem>
#include <Biswas.hpp>
#include <Library/PresentationLib.hpp>
#include <Library/XmlFileLib.hpp>

class Document {
private:
    const std::filesystem::path tmp = std::filesystem::absolute("tmp/");
    xmlFile::ContentTypes contentType;
    Presentation presentation;

    Status
    WriteRelation (
        ) const;

    Status
    SetContentTypes (
        );
public:
    Document ();

    Status
    Write (
        const std::filesystem::path path
        );
};

#endif
