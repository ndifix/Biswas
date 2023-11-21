#pragma once

#include <Library/XmlBaseLib.hpp>
#include <Library/XmlElementDrawingLib/MajorFont.hpp>
#include <Library/XmlElementDrawingLib/MinorFont.hpp>

namespace OpenXml::Drawing {

class FontScheme : public XmlElement {
private:
    MajorFont *majorFont;
    MinorFont *minorFont;
public:
    AttributeString *Name;
    FontScheme();
};

}
