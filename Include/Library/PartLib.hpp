#ifndef PART_LIB_HPP
#define PART_LIB_HPP

#include <string>
#include <Biswas.hpp>

class IPart {
protected:
public:
    const std::string rootDir;
    const std::string partDir;

    IPart(
        const std::string &root,
        std::string dir
        );

    virtual
    Status
    Write (
        ) = 0;
};

#endif
