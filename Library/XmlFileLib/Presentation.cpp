#include <Library/XmlFileLib.hpp>
#include <Library/XmlRootElementLib.hpp>

using namespace xmlElm;

xmlFile::Presentation::Presentation (
    std::string path
    ) : XmlFile(path)
{
    this->RootElement = new xmlElm::Presentation();
}
