#include <Library/XmlFileLib.hpp>
#include <Library/XmlRootElementLib.hpp>

using namespace xmlElm;

xmlFile::PresentationProperties::PresentationProperties (
    std::string path
    ) : XmlFile(path)
{
    this->RootElement = new xmlElm::PresentationProperties();
}
