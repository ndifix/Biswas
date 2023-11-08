#include <Library/XmlFileLib.hpp>
#include <Library/XmlRootElementLib.hpp>

using namespace xmlFile;

Relationships::Relationships (
    const std::filesystem::path &path
    ) : XmlFile(path, std::shared_ptr<OpenXml::Relationships>(new OpenXml::Relationships()))
{
}
