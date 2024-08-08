#pragma once
#ifndef COLORFILEFORMATEXCEPTION_H
#define COLORFILEFORMATEXCEPTION_H

#include <exception>
#include <string>
using namespace std;

class ColorFileFormatException:public exception {
public:
	const char* what() const noexcept override {
		return "File Format is Wrong.";
	}
};

#endif