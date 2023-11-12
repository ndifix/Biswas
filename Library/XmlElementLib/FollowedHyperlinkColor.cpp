#include <Library/XmlElementLib.hpp>

using namespace OpenXml::Drawing;

FollowedHyperlinkColor::FollowedHyperlinkColor (
    ) : XmlElement("folHlink", xmlns::drawingm)
{
    this->rgbColorModelHex = new RgbColorModelHex();
    this->rgbColorModelHex->Val->val = "954F72";
    this->AddChildElement(this->rgbColorModelHex);
}