#include <Library/XmlFileLib.hpp>
#include <Library/XmlRootElementLib.hpp>

using namespace xmlFile;

Relationships::Relationships (
    const std::filesystem::path &path
    ) : XmlFile(path)
{
    this->RootElement.reset(new xmlElm::Relationships());
}
