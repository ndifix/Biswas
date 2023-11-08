#include <Library/XmlFileLib.hpp>
#include <Library/XmlRootElementLib.hpp>

xmlFile::ContentTypes::ContentTypes (
    const std::filesystem::path &path
    ) : XmlFile(path, std::shared_ptr<OpenXml::Types>(new OpenXml::Types()))
{
}
