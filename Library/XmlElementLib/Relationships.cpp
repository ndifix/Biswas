#include <Biswas.hpp>
#include <Library/XmlElementLib.hpp>
#include <Library/XmlRootElementLib.hpp>

using namespace xmlElm;

Status
Relationships::AddRelation (
    std::unique_ptr<Relationship> relation
    )
{
    this->AddChildElement(relation.release());

    return Status::Success;
}
