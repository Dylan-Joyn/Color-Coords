#pragma once
#ifndef FILENOTFOUNDEXCEPTION_H
#define FILENOTFOUNDEXCEPTION_H
using namespace std;
#include <exception>

class FIleNotFoundException : public exception {
public:
    const char* what() const noexcept override {
        return "File not found.";
    }
};

#endif


