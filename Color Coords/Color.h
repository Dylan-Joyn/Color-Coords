#pragma once
#ifndef COLOR_H
#define COLOR_H
#include <iostream>
using namespace std;

class Color
{
private:
	int red, green, blue;
public:
	static const Color RED;
	static const Color YELLOW;
	static const Color BLUE;
	static const Color GREEN;
	static const Color PURPLE;
	static const Color ORANGE;
	static const Color BLACK;
	static const Color WHITE;
	static const Color GRAY;

	Color(int r = 255, int g = 255, int b = 255);

	friend ostream& operator<<(ostream& os, const Color& c);

	int getRed() const {
		return red;

	}

	int getGreen() const {
		return green;

	}

	int getBlue() const {
		return blue;

	}

	void setRed(int r);
	void setGreen(int g);
	void setBlue(int b);




};

#endif
