#pragma once

#include <list>
#include <memory>
#include <string>

class OpenXmlPartContainer;

class ReferenceRelationship {
public:
    // 所有者
    const OpenXmlPartContainer *container;
    // リレーションシップ ID
    const std::string           id;
    // リレーションシップの種類
    const std::string           relationshipType;
    // リレーションシップのターゲット URI
    const std::string           uri;
};

class DataPart;

class DataPartReferenceRelationship : ReferenceRelationship {
public:
    const DataPart *dataPart;
};

class IdPartPair;

class OpenXmlPartContainer {
private:
    std::list<std::unique_ptr<DataPartReferenceRelationship>> dataPartReferenceRelationships;
    std::list<std::shared_ptr<IdPartPair>>                    parts;
};
