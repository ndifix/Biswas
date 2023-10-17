#include <Library/XmlFileLib.hpp>
#include <Library/XmlRootElementLib.hpp>

using namespace xmlElm;

xmlFile::PresentationProperties::PresentationProperties (
    const std::filesystem::path &path
    ) : XmlFile(path)
{
    this->RootElement = new xmlElm::PresentationProperties();
}
