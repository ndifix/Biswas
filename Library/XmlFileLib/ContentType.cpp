#include <Library/XmlFileLib.hpp>
#include <Library/XmlRootElementLib.hpp>

xmlFile::ContentTypes::ContentTypes (
    const std::filesystem::path &path
    ) : XmlFile(path)
{
    this->RootElement.reset(new xmlElm::Types());
}