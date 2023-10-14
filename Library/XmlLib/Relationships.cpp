#include <Library/XmlBaseLib.hpp>
#include <Library/XmlFileLib.hpp>

using namespace xmlElm;

xmlFile::Relationships::Relationships (
    )
{
    this->RootElement = new xmlElm::Relationships();
}
