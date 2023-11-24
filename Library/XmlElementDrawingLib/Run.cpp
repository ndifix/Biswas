#include <Library/XmlElementDrawingLib.hpp>

using namespace OpenXml::Drawing;

Run::Run (
    ) : XmlElement("r", xmlns::drawingm)
{
    this->runProperties = new RunProperties();
    this->AddChildElement(this->runProperties);
}
