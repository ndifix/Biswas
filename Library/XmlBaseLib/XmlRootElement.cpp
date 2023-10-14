#include <Library/XmlBaseLib.hpp>

XmlRootElement::XmlRootElement (
    const char *tag
    ) : XmlElement(tag)
{
    this->parent = nullptr;
}
