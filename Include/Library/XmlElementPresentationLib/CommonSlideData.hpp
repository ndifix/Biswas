#pragma once

#include <Library/XmlBaseLib.hpp>
#include <Library/XmlElementPresentationLib/ShapeTree.hpp>

namespace OpenXml::Presentation {

class CommonSlideData : public XmlElement {
private:
public:
    ShapeTree *shapeTree;
    CommonSlideData();
};

}

