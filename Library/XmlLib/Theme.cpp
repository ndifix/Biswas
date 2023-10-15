#include <Library/XmlBaseLib.hpp>
#include <Library/XmlFileLib.hpp>

using namespace xmlElm;

xmlFile::Theme::Theme (
    std::string path
    ) : XmlFile(path)
{
    this->RootElement = new xmlElm::Theme();
}
