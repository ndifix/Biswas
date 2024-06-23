#include <Library/PackagingLib/OpenXmlPackage.hpp>
#include <Library/UtilLib.hpp>

using namespace OpenXml::Packaging;

OpenXmlPackage::OpenXmlPackage (
    OpenXmlPart *openXmlPart
    ) : rootPart(openXmlPart)
{
}

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
