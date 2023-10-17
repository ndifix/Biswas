#include <Library/XmlFileLib.hpp>
#include <Library/XmlRootElementLib.hpp>

using namespace xmlElm;

xmlFile::SlideMaster::SlideMaster (
    const std::filesystem::path &path
    ) : XmlFile(path)
{
    this->RootElement.reset(new xmlElm::SlideMaster());
}
