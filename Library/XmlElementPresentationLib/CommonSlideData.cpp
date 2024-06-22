#include <Library/XmlElementPresentationLib/CommonSlideData.hpp>

using namespace OpenXml::Presentation;

CommonSlideData::CommonSlideData (
    ) : XmlElement("cSld", xmlns::presenta)
{
    this->shapeTree = new ShapeTree();
    this->AddChildElement(this->shapeTree);
}
