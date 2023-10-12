#ifndef DOCUMENT_LIB_HPP
#define DOCUMENT_LIB_HPP

#include <string>
#include <Biswas.hpp>
#include <Library/PresentationLib.hpp>

class Document {
private:
    const std::string tmp = "tmp/";
    Presentation presentation;
public:
    Document ();

    Status
    Write (
        std::string path
        ) const;
};

#endif
