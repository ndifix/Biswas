#pragma once

#include <Library/PackagingLib/ReferenceRelationship.hpp>

namespace OpenXml::Packaging {

class DataPart;

class DataPartReferenceRelationship : ReferenceRelationship {
public:
    const DataPart *dataPart;
};

}
