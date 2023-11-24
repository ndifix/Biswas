#include <Library/XmlElementDrawingLib.hpp>

using namespace OpenXml::Drawing;

Run::Run (
    ) : XmlElement("r", xmlns::drawingm)
{
    this->runProperties = new RunProperties();
    this->text = new Text();
    this->AddChildElement(this->runProperties);
    this->AddChildElement(this->text);
}
