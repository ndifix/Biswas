#ifndef PRESENTATION_LIB_HPP
#define PRESENTATION_LIB_HPP

#include <Biswas.hpp>
#include <Library/PartLib.hpp>

class Presentation {
private:
public:
    PresentationPart *part = nullptr;

    Presentation (
        const std::filesystem::path &tmp
        );

    ~Presentation (
        );

    Status
    Write (
        );
};

#endif
