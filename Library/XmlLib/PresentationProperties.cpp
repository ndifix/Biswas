#include <Library/XmlBaseLib.hpp>
#include <Library/XmlFileLib.hpp>

using namespace xmlElm;

xmlFile::PresentationProperties::PresentationProperties (
    std::string path
    ) : XmlFile(path)
{
    this->RootElement = new xmlElm::PresentationProperties();
}
