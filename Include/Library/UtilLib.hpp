#ifndef UTIL_LIB_HPP
#define UTIL_LIB_HPP

#include <string>
#include <Biswas.hpp>

Status
Zip (
    std::string srcDir,
    std::string outFile
    );

Status
MakeDir (
    std::string path
    );

#endif
