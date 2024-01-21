#include <Library/XmlElementPresentationLib/Picture.hpp>

using namespace OpenXml::Presentation;

Picture::Picture (
    ) : XmlElement("pic", xmlns::presenta)
{
    this->blipFill = new BlipFill();
    this->nonVisualPictureProperties = new NonVisualPictureProperties();
    this->shapeProperties = new ShapeProperties();
    this->AddChildElement(this->nonVisualPictureProperties);
    this->AddChildElement(this->blipFill);
    this->AddChildElement(this->shapeProperties);
}
