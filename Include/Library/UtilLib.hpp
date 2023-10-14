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

Status
RemoveAll (
    std::string path
    );

/**
 * ファイル拡張子をzipからpptxにする。
 * *.pptx.zip というファイル名を想定している。
*/
Status
RenameZipToPptx (
    std::string path
    );

#endif
