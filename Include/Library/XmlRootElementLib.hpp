#pragma once

#include <memory>
#include <Biswas.hpp>
#include <Library/XmlBaseLib.hpp>
#include <Library/XmlElementLib.hpp>
#include <Library/XmlElementDrawingLib/ThemeElements.hpp>
#include <Library/XmlElementPresentationLib/ColorMap.hpp>
#include <Library/XmlElementPresentationLib/ColorMapOverride.hpp>
#include <Library/XmlElementPresentationLib/CommonSlideData.hpp>
#include <Library/XmlElementPresentationLib/DefaultTextStyle.hpp>
#include <Library/XmlElementPresentationLib/NotesSize.hpp>
#include <Library/XmlElementPresentationLib/SlideIdList.hpp>
#include <Library/XmlElementPresentationLib/SlideLayoutIdList.hpp>
#include <Library/XmlElementPresentationLib/SlideMasterList.hpp>
#include <Library/XmlElementPresentationLib/SlideSize.hpp>

namespace OpenXml {

class Types : public XmlRootElement {
private:
public:
    inline Types() : XmlRootElement("Types", xmlns::content_) {};
    biswas::Status AddContentType(std::unique_ptr<Default>);
    biswas::Status AddContentType(std::unique_ptr<Override>);
};

class Relationships : public XmlRootElement {
private:
public:
    inline Relationships() : XmlRootElement("Relationships", xmlns::relpack_) {};
    biswas::Status AddRelation(std::unique_ptr<Relationship>);
};

namespace Presentation {

class Presentation : public XmlRootElement {
private:
public:
    SlideIdList *slideIdList;
    SlideMasterList *slideMasterList;
    SlideSize *slideSize;
    NotesSize *notesSize;
    DefaultTextStyle *defaultTextStyle;
    Presentation();
};

class PresentationProperties : public XmlRootElement {
private:
public:
    inline PresentationProperties() : XmlRootElement("presentationPr", xmlns::presenta) {};
};

}

namespace Drawing {

class Theme : public XmlRootElement {
private:
    ThemeElements *themeElements;
public:
    AttributeString *Name;
    Theme();
};

}

namespace Presentation {

class SlideMaster : public XmlRootElement {
private:
    ColorMap *colorMap;
    CommonSlideData *commonSlideData;
public:
    SlideLayoutIdList *slideLayoutIdList;

    SlideMaster();
};

class SlideLayout : public XmlRootElement {
private:
    ColorMapOverride *colorMapOverride;
public:
    CommonSlideData *commonSlideData;

    SlideLayout();
};

class Slide : public XmlRootElement {
private:
    ColorMapOverride *colorMapOverride;
public:
    CommonSlideData *commonSlideData;

    Slide();
};

}

}
