#include <Library/XmlFileLib.hpp>
#include <Library/XmlRootElementLib.hpp>

using namespace xmlElm;

xmlFile::Presentation::Presentation (
    const std::filesystem::path &path
    ) : XmlFile(path)
{
    this->RootElement = new xmlElm::Presentation();
}
