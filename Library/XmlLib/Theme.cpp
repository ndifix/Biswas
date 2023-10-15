#include <Library/XmlFileLib.hpp>
#include <Library/XmlRootElementLib.hpp>

using namespace xmlElm;

xmlFile::Theme::Theme (
    std::string path
    ) : XmlFile(path)
{
    this->RootElement = new xmlElm::Theme();
}
