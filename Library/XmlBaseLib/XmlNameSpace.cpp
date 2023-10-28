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

XmlNameSpace content_ = {emptystrSign, content_NS};
XmlNameSpace drawingm = {emptystrSign, drawingmNS};
XmlNameSpace relation = {emptystrSign, relationNS};
XmlNameSpace presenta = {emptystrSign, presentaNS};
const XmlNameSpace pereleme = {emptystrSign, ""};

const
char
GetSignature (
    const xmlns::XmlNameSpace &xmlns
    )
{
    if (xmlns == xmlns::relation) {
        return xmlns::relationSign;
    }
    if (xmlns == xmlns::presenta) {
        return xmlns::presentaSign;
    }
    if (xmlns == xmlns::content_) {
        return xmlns::content_Sign;
    }
    if (xmlns == xmlns::drawingm) {
        return xmlns::drawingmSign;
    }

    return xmlns::emptystrSign;
}

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
