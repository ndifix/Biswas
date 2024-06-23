#pragma once

#include <string>

namespace OpenXml::Packaging {

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

}
