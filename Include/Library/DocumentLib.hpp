#pragma once

namespace biswas {
class Document;
}

#include <filesystem>
#include <Biswas.hpp>
#include <Library/PresentationLib.hpp>
#include <Library/XmlFileLib.hpp>

namespace biswas {

class Document {
private:
    const std::filesystem::path tmp = std::filesystem::absolute("tmp/");
    Presentation presentation;

    Status
    WriteRelation (
        ) const;

    Status
    WriteContentTypes (
        ) const;
public:
    Document ();

    Status
    Write (
        const std::filesystem::path path
        ) const;
};

}
