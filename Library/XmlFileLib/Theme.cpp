#include <Library/XmlFileLib.hpp>
#include <Library/XmlRootElementLib.hpp>

using namespace xmlElm;

xmlFile::Theme::Theme (
    const std::filesystem::path &path
    ) : XmlFile(path)
{
    this->RootElement.reset(new xmlElm::Theme());
}
