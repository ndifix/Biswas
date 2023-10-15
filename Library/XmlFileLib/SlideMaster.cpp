#include <Library/XmlFileLib.hpp>
#include <Library/XmlRootElementLib.hpp>

using namespace xmlElm;

xmlFile::SlideMaster::SlideMaster (
    std::string path
    ) : XmlFile(path)
{
    this->RootElement = new xmlElm::SlideMaster();
}
