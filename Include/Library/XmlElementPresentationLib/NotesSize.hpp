#pragma once

#include <Library/XmlBaseLib.hpp>

namespace OpenXml::Presentation {

class NotesSize : public XmlElement {
private:
public:
    AttributeInt64 *Cx;
    AttributeInt64 *Cy;
    NotesSize();
};

}
