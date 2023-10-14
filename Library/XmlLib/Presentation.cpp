#include <Library/XmlBaseLib.hpp>
#include <Library/XmlFileLib.hpp>

using namespace xmlElm;

xmlFile::Presentation::Presentation (
    )
{
    this->RootElement = new xmlElm::Presentation();
}
