#pragma once

#include <memory>
#include <Biswas.hpp>
#include <Library/PartLib.hpp>

class Presentation {
private:
public:
    std::unique_ptr<PresentationPart> part;

    Presentation (
        const std::filesystem::path &tmp
        );

    Status
    Write (
        ) const;
};
