#pragma once

#include <memory>
#include <Biswas.hpp>
#include <Library/DocumentLib.hpp>
#include <Library/PartLib.hpp>

class Presentation {
private:
    std::unique_ptr<PresentationPart> part;

    Status
    Write (
        ) const;
public:
friend Document;

    Presentation (
        const std::filesystem::path &tmp
        );
};
