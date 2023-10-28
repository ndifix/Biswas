#include <Biswas.hpp>
#include <Library/XmlElementLib.hpp>

using namespace xmlElm;

void
SlideSize::Write (
    std::ofstream &ofs
    )
{
    this->AddAttribute("cx", std::to_string(this->Cx));
    this->AddAttribute("cy", std::to_string(this->Cy));
    XmlElement::Write(ofs);
}
