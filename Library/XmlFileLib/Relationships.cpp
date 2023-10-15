#include <Library/XmlFileLib.hpp>
#include <Library/XmlRootElementLib.hpp>

using namespace xmlFile;

Relationships::Relationships (
    std::string path
    ) : XmlFile(path)
{
    this->RootElement = new xmlElm::Relationships();
}
