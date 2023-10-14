#include <Library/XmlBaseLib.hpp>

#include <iostream>
#include <string>

XmlFile::XmlFile (
    std::string &path
    ) : filePath(path)
{
}

XmlFile::~XmlFile (
    )
{
    if (this->RootElement != nullptr) {
        delete this->RootElement;
        this->RootElement = nullptr;
    }
}

std::string
XmlFile::Declare (
    ) const
{
    std::string str = R"(<?xml version="1.0" encoding="UTF-8" standalone="yes"?>)";
    return str;
}

void
XmlFile::Write (
    ) const
{
    std::ofstream ofs(this->filePath);
    if (!ofs) {
        std::cerr << "Failed to write xml file of "
            << this->filePath
            << std::endl;
        return;
    }

    ofs << this->Declare() << "\n";
    this->RootElement->Write(ofs);
}
