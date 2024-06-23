#include <Library/PackagingLib/OpenXmlPartContainer.hpp>
#include <Library/UtilLib.hpp>

using namespace OpenXml::Packaging;

namespace {
const std::filesystem::path tmp = std::filesystem::absolute("tmp/");
}

void
OpenXmlPackage::Dispose (
    ) const
{
    // tmp ディレクトリがなければ作成し、あれば中を空にする。
    ::MakeDir(tmp);
    ::RemoveAll(tmp);
    ::MakeDir(tmp);

    std::filesystem::current_path(tmp);
    ::MakeDir(this->rootPart->uri);
    this->rootPart->Write();
}
