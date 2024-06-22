#pragma once

#include <filesystem>
#include <Biswas.hpp>

biswas::Status
MakeDir (
    const std::filesystem::path &path
    );

biswas::Status
RemoveAll (
    const std::filesystem::path &path
    );

biswas::Status
BuildPptxFile (
    const std::string &dir,
    const std::filesystem::path &outPath
    );
