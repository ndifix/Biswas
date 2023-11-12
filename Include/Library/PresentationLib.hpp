#pragma once

#include <memory>
#include <Biswas.hpp>
#include <Library/DocumentLib.hpp>
#include <Library/PartLib.hpp>

namespace biswas {

class Presentation;
class PresentationProperties;

class Presentation {
private:
    std::unique_ptr<PresentationPart> part;

    Status
    Write (
        ) const;
public:
friend Document;

    std::shared_ptr<biswas::PresentationProperties> presentationProperties;

    Presentation (
        const std::filesystem::path &tmp
        );
};

class PresentationProperties {
private:
    std::shared_ptr<PresentationPropertiesPart> part;
public:
friend Presentation;

    inline
    PresentationProperties (
        std::shared_ptr<PresentationPropertiesPart> &presProp
        ) { this->part = presProp; }
};

}
