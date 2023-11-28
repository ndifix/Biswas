#include <Library/XmlElementPresentationLib/Picture.hpp>

using namespace OpenXml::Presentation;

Picture::Picture (
    ) : XmlElement("pic", xmlns::presenta)
{
    this->nonVisualPictureProperties = new NonVisualPictureProperties();
    this->shapeProperties = new ShapeProperties();
    this->AddChildElement(this->nonVisualPictureProperties);
    this->AddChildElement(this->shapeProperties);
}
