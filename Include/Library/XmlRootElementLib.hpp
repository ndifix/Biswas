#pragma once

#include <memory>
#include <Biswas.hpp>
#include <Library/XmlBaseLib.hpp>
#include <Library/XmlElementLib.hpp>
#include <Library/XmlElementLib/Default.hpp>

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
    Attribute *Name;
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
    CommonSlideData *commonSlideData;
public:
    SlideLayout();
};

}

}
