#ifndef UTIL_LIB_HPP
#define UTIL_LIB_HPP

#include <filesystem>
#include <string>
#include <Biswas.hpp>

Status
MakeDir (
    std::string path
    );

Status
RemoveAll (
    std::string path
    );

Status
BuildPptxFile (
    const std::string &dir,
    const std::filesystem::path &outPath
    );

#endif
