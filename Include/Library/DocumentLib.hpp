#ifndef DOCUMENT_LIB_HPP
#define DOCUMENT_LIB_HPP

#include <filesystem>
#include <Biswas.hpp>
#include <Library/PresentationLib.hpp>
#include <Library/XmlFileLib.hpp>

class Document {
private:
    const std::filesystem::path tmp = "tmp/";
    const std::filesystem::path relsDir;
    xmlFile::Relationships rels;
    xmlFile::ContentTypes contentType;
    Presentation presentation;

    Status
    SetRelation (
        );

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
