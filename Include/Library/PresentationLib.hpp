#ifndef PRESENTATION_LIB_HPP
#define PRESENTATION_LIB_HPP

#include <string>
#include <Biswas.hpp>
#include <Library/PartLib.hpp>

class Presentation {
private:
public:
    PresentationPart *part = nullptr;

    Presentation (
        const std::string &root
        );

    ~Presentation (
        );

    Status
    Write (
        );
};

#endif
