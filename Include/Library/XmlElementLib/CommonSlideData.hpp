#pragma once

#include <Library/XmlBaseLib.hpp>
#include <Library/XmlElementLib/ShapeTree.hpp>

namespace OpenXml::Presentation {

class CommonSlideData : public XmlElement {
private:
public:
    ShapeTree *shapeTree;
    CommonSlideData();
};

}

