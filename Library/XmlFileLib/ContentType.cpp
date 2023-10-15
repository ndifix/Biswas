#include <Library/XmlFileLib.hpp>
#include <Library/XmlRootElementLib.hpp>

xmlFile::ContentTypes::ContentTypes (
    std::string path
    ) : XmlFile(path)
{
    this->RootElement = new xmlElm::Types();
}
