#include <Library/XmlElementPresentationLib/Picture.hpp>

using namespace OpenXml::Presentation;

Picture::Picture (
    ) : XmlElement("pic", xmlns::presenta)
{
    this->shapeProperties = new ShapeProperties();
    this->AddChildElement(this->shapeProperties);
}
