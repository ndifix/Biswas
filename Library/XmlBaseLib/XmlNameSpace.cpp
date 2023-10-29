#include <Library/XmlBaseLib.hpp>

using namespace xmlns;

namespace xmlns {

const char emptystrSign = ' ';
const char content_Sign = 'c';
const char drawingmSign = 'a';
const char relationSign = 'r';
const char presentaSign = 'p';
const char *content_NS = "http://schemas.openxmlformats.org/package/2006/content-types";
const char *drawingmNS = "http://schemas.openxmlformats.org/drawingml/2006/main";
const char *relationNS = "http://schemas.openxmlformats.org/officeDocument/2006/relationships";
const char *presentaNS = "http://schemas.openxmlformats.org/presentationml/2006/main";

const XmlNameSpace content_ = {content_Sign, content_NS};
const XmlNameSpace drawingm = {drawingmSign, drawingmNS};
const XmlNameSpace relation = {relationSign, relationNS};
const XmlNameSpace presenta = {presentaSign, presentaNS};
const XmlNameSpace pereleme = {emptystrSign, ""};

}

bool
xmlns::operator== (
    const XmlNameSpace &lhs,
    const XmlNameSpace &rhs
    )
{
    return lhs.nameSpace == rhs.nameSpace;
}

bool
xmlns::operator< (
    const XmlNameSpace &lhs,
    const XmlNameSpace &rhs
    )
{
    return lhs.nameSpace < rhs.nameSpace;
}
