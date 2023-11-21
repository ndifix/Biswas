#include <Library/XmlElementDrawingLib.hpp>

using namespace OpenXml::Drawing;

FollowedHyperlinkColor::FollowedHyperlinkColor (
    ) : XmlElement("folHlink", xmlns::drawingm)
{
    this->rgbColorModelHex = new RgbColorModelHex();
    this->rgbColorModelHex->Val->value = 0x954F72;
    this->AddChildElement(this->rgbColorModelHex);
}
