#pragma once

namespace biswas {
class Document;
}

#include <filesystem>
#include <Biswas.hpp>
#include <Api/Presentation.hpp>
#include <Library/XmlFileLib.hpp>

namespace biswas {

class Document {
private:
    const std::filesystem::path tmp = std::filesystem::absolute("tmp/");

    Status
    WriteRelation (
        ) const;

    Status
    WriteContentTypes (
        ) const;
public:
    std::unique_ptr<Presentation> presentation;

    Document ();

    Status
    Write (
        const std::filesystem::path path
        ) const;
};

}
