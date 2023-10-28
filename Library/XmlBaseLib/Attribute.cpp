#include <Library/XmlBaseLib.hpp>

void
Attribute::Write (
    std::ofstream &ofs
    )
{
    if (this->val.empty()) {
        return;
    }

    ofs << ' ' << this->key << "=\"" << this->val << '\"';
}
