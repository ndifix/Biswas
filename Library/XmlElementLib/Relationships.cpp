#include <Biswas.hpp>
#include <Library/XmlElementLib.hpp>
#include <Library/XmlRootElementLib.hpp>

using namespace xmlElm;

Status
Relationships::AddRelation (
    Relationship *relation
    )
{
    this->AddChildElement(relation);

    return Status::Success;
}
