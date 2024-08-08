#pragma once
#ifndef COORDINATEOUTOFRANGEEXCEPTION_H
#define COORDINATEOUTOFRANGEEXCEPTION_H

#include <exception>
using namespace std;

class CoordinateOutOfRangeException : public exception {
public:
    const char* what() const noexcept override {
        return "Coordinate out of range.";
    }
};

#endif
