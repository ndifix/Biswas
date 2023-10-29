#include <Library/XmlBaseLib.hpp>

Attribute::Attribute (
    const char *key
    ) : xmlns(xmlns::pereleme)
{
    this->key = key;
}

Attribute::Attribute (
    const char *key,
    const xmlns::XmlNameSpace &xmlns
    ) : xmlns(xmlns)
{
    this->key = key;
}

void
Attribute::Write (
    std::ofstream &ofs
    )
{
    if (this->val.empty()) {
        return;
    }

    ofs << ' ';
    if (!(this->xmlns == xmlns::pereleme)) {
        ofs << this->xmlns.signature << ':';
    }
    ofs << this->key << "=\"" << this->val << '\"';
}
