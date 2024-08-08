#pragma once
#ifndef PICTURE_H
#define PICTURE_H

#include <vector>
#include <iostream>

#include "Color.h"
class Picture
{
private:
	vector<vector<Color>> image;
public:
	Picture(int width, int height);

	void setPixel(int x, int y, const Color& c);

	int getHeight() const {
		return image.size();
	}

	int getWidth() const {
		return image[0].size();

	}

	friend ostream& operator<<(ostream& os, const Picture& p);


};

#endif