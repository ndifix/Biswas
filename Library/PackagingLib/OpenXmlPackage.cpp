#include <Library/PackagingLib/OpenXmlPartContainer.hpp>
#include <Library/UtilLib.hpp>

using namespace OpenXml::Packaging;

void
OpenXmlPackage::Dispose (
    ) const
{
    // tmp ディレクトリがなければ作成し、あれば中を空にする。
    ::MakeDir(this->tmp);
    ::RemoveAll(this->tmp);
    ::MakeDir(this->tmp);

    std::filesystem::current_path(this->tmp);
    ::MakeDir(this->rootPart->uri);
    this->rootPart->Write();
}
