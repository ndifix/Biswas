#pragma once

#include <Library/XmlBaseLib.hpp>
#include <Library/XmlElementLib/SlideId.hpp>

namespace OpenXml::Presentation {

class SlideIdList : public XmlElement {
private:
public:
    std::list<SlideId*> ids;
    inline SlideIdList() : XmlElement("sldIdLst", xmlns::presenta) {};
    void AddId ();
};

}
