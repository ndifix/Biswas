#pragma once

#include <Library/XmlBaseLib.hpp>
#include <Library/XmlElementLib/SlideMasterId.hpp>

namespace OpenXml::Presentation {

class SlideMasterList : public XmlElement {
private:
public:
    std::list<SlideMasterId*> ids;
    inline SlideMasterList() : XmlElement("sldMasterIdLst", xmlns::presenta) {};
    void AddId (uint32_t id);
};

}
