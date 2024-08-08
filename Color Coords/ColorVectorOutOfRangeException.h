#pragma once
#ifndef COLORVECTOROUTOFRANGEEXCEPTION_H
#define COLORVECTOROUTOFRANGEEXCEPTION_H

#include<exception>
#include <string>
using namespace std;

class ColorVectorOutOfRangeException : public exception {
private:
    string message;
public:
    ColorVectorOutOfRangeException(const string& msg) : message(msg) {}

    const char* what() const noexcept override {
        return message.c_str();
    }
};

#endif

