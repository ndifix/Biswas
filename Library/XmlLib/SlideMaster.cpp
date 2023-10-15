#include <Library/XmlBaseLib.hpp>
#include <Library/XmlFileLib.hpp>

using namespace xmlElm;

xmlFile::SlideMaster::SlideMaster (
    std::string path
    ) : XmlFile(path)
{
    this->RootElement = new xmlElm::SlideMaster();
}
