#ifndef PART_LIB_HPP
#define PART_LIB_HPP

#include <string>
#include <Biswas.hpp>

class IPart {
protected:
public:
    const std::string rootDir;
    const std::string partDir;
    const char *relationType;
    const char *contentType;

    IPart (
        const std::string &root,
        std::string dir,
        const char *relType,
        const char *conType
        );

    virtual
    Status
    Write (
        ) = 0;
};

#endif
