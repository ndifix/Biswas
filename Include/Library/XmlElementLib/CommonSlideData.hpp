#ifndef XML_ELEMENT_LIB_COMMONSLIDEDATA
#define XML_ELEMENT_LIB_COMMONSLIDEDATA

#include <Library/XmlBaseLib.hpp>

namespace xmlElm {

class CommonSlideData : public XmlElement {
private:
public:
    inline CommonSlideData() : XmlElement("cSld", xmlns::presenta) {};
};

}

#endif
