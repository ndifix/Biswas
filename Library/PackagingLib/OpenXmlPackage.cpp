#include <Library/PackagingLib/OpenXmlPackage.hpp>
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
}
