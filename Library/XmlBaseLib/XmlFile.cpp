#include <Library/XmlBaseLib.hpp>

#include <iostream>
#include <string>

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
    std::string path
    ) const
{
    std::ofstream ofs(path);
    if (!ofs) {
        std::cerr << "Failed to write xml file of "
            << path
            << std::endl;
        return;
    }

    ofs << this->Declare() << "\n";
    this->RootElement->Write(ofs);
}
