#pragma once

#include <list>
#include <memory>
#include <Library/PackagingLib/DataPartReferenceRelationship.hpp>

namespace OpenXml::Packaging {

class IdPartPair;

class OpenXmlPartContainer {
private:
    std::list<std::unique_ptr<DataPartReferenceRelationship>> dataPartReferenceRelationships;
    std::list<std::shared_ptr<IdPartPair>>                    parts;
};

}
