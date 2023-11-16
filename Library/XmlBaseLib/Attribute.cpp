#include <Library/XmlBaseLib.hpp>

Attribute::Attribute (
    const char *key
    ) : xmlns(xmlns::pereleme)
{
    this->key = key;
}

Attribute::Attribute (
    const char *key,
    const char *val
    ) : xmlns(xmlns::pereleme)
{
    this->key = key;
    this->val = val;
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
    ofs << ' ';
    if (!(this->xmlns == xmlns::pereleme)) {
        ofs << this->xmlns.signature << ':';
    }
    ofs << this->key << "=\"" << this->val << '\"';
}

template<>
void
AttributeNullable<bool>::Write (
    std::ofstream &ofs
    )
{
    if (this->value) {
        this->val = *this->value.get() ? "1" : "0";
        Attribute::Write(ofs);
    }
}
