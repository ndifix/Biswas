#include <Library/PackagingLib/OpenXmlPartContainer.hpp>

using namespace OpenXml::Packaging;

std::shared_ptr<OpenXmlPart>
OpenXmlPartContainer::AddPart (
    std::shared_ptr<OpenXmlPart> part
    )
{
    this->parts.emplace_back(IdPartPair(part, "rId1"));
    return this->parts.back().openXmlPart;
}
