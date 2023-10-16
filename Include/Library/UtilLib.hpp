#ifndef UTIL_LIB_HPP
#define UTIL_LIB_HPP

#include <filesystem>
#include <Biswas.hpp>

Status
MakeDir (
    const std::filesystem::path &path
    );

Status
RemoveAll (
    const std::filesystem::path &path
    );

Status
BuildPptxFile (
    const std::string &dir,
    const std::filesystem::path &outPath
    );

#endif
