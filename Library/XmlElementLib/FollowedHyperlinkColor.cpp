#include <Library/XmlElementLib.hpp>

using namespace xmlElm;

FollowedHyperlinkColor::FollowedHyperlinkColor (
    ) : XmlElement("folHlink", xmlns::drawingm)
{
    this->rgbColorModelHex = new RgbColorModelHex();
    this->rgbColorModelHex->Val->val = "954F72";
    this->AddChildElement(this->rgbColorModelHex);
}
