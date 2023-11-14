#pragma once

#include <memory>
#include <Biswas.hpp>
#include <Library/XmlBaseLib.hpp>
#include <Library/XmlElementLib.hpp>
#include <Library/XmlElementDrawingLib.hpp>
#include <Library/XmlElementPresentationLib.hpp>

namespace OpenXml {

class Types : public XmlRootElement {
private:
public:
    inline Types() : XmlRootElement("Types", xmlns::content_) {};
    Status AddContentType(std::unique_ptr<Default>);
    Status AddContentType(std::unique_ptr<Override>);
};

class Relationships : public XmlRootElement {
private:
public:
    inline Relationships() : XmlRootElement("Relationships", xmlns::relpack_) {};
    Status AddRelation(std::unique_ptr<Relationship>);
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
