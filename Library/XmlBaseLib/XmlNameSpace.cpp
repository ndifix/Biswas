#include <Library/XmlBaseLib.hpp>

using namespace xmlns;

namespace xmlns {

const char emptystrSign = ' ';
const char relationSign = 'r';
const char presentaSign = 'p';
const char *relationNS = "http://schemas.openxmlformats.org/officeDocument/2006/relationships";
const char *presentaNS = "http://schemas.openxmlformats.org/presentationml/2006/main";

XmlNameSpace relation = {emptystrSign, relationNS};
XmlNameSpace presenta = {emptystrSign, presentaNS};
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
