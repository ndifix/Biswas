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

template<>
void
AttributeNullable<int64_t>::Write (
    std::ofstream &ofs
    )
{
    if (!this->value) return;

    this->val = std::to_string(*this->value.get());
    Attribute::Write(ofs);
}

template<>
void
AttributeNullable<ColorSchemeIndexValues>::Write (
    std::ofstream &ofs
    )
{
    if (!this->value) return;

    switch (*this->value.get()) {
    case ColorSchemeIndexValues::Accent1:
        this->val = "accent1";
        break;
    case ColorSchemeIndexValues::Accent2:
        this->val = "accent2";
        break;
    case ColorSchemeIndexValues::Accent3:
        this->val = "accent3";
        break;
    case ColorSchemeIndexValues::Accent4:
        this->val = "accent4";
        break;
    case ColorSchemeIndexValues::Accent5:
        this->val = "accent5";
        break;
    case ColorSchemeIndexValues::Accent6:
        this->val = "accent6";
        break;
    case ColorSchemeIndexValues::Dark1:
        this->val = "dk1";
        break;
    case ColorSchemeIndexValues::Dark2:
        this->val = "dk2";
        break;
    case ColorSchemeIndexValues::FollowedHyperlink:
        this->val = "folHlink";
        break;
    case ColorSchemeIndexValues::Hyperlink:
        this->val = "hlink";
        break;
    case ColorSchemeIndexValues::Light1:
        this->val = "lt1";
        break;
    case ColorSchemeIndexValues::Light2:
        this->val = "lt2";
        break;
    }
    Attribute::Write(ofs);
}
