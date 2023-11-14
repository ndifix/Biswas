#pragma once

#include <Library/XmlBaseLib.hpp>
#include <Library/XmlElementPresentationLib/SlideLayoutId.hpp>

namespace OpenXml::Presentation {

class SlideLayoutIdList : public XmlElement {
private:
public:
    std::list<SlideLayoutId*> ids;
    inline SlideLayoutIdList() : XmlElement("sldLayoutIdLst", xmlns::presenta) {};
    void AddId ();
};

}
