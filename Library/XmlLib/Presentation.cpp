#include <Library/XmlBaseLib.hpp>
#include <Library/XmlFileLib.hpp>

using namespace xmlElm;

xmlFile::Presentation::Presentation (
    std::string path
    ) : XmlFile(path)
{
    this->RootElement = new xmlElm::Presentation();
}
