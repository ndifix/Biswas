#include <Library/XmlBaseLib.hpp>
#include <Library/XmlFileLib.hpp>

using namespace xmlElm;

xmlFile::Relationships::Relationships (
    std::string path
    ) : XmlFile(path)
{
    this->RootElement = new xmlElm::Relationships();
}
