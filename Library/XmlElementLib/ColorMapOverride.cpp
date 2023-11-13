#include <Library/XmlElementLib.hpp>

using namespace OpenXml::Presentation;

ColorMapOverride::ColorMapOverride (
    ) : XmlElement("clrMapOvr", xmlns::presenta)
{
    this->masterColorMapping = new Drawing::MasterColorMapping();
    this->AddChildElement(this->masterColorMapping);
}
