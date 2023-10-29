#include <Library/XmlElementLib.hpp>

using namespace xmlElm;

CommonSlideData::CommonSlideData (
    ) : XmlElement("cSld", xmlns::presenta)
{
    this->shapeTree.reset(new ShapeTree());
}
