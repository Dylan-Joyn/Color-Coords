// Color Coords.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <fstream>
#include <iostream>
#include <string>
#include "Color.h"
#include "Picture.h"
#include "FileNotFoundException.h"
#include "ColorFileFormatException.h"
#include "CoordinateOutOfRangeException.h"
#include "ColorVectorOutOfRangeException.h"

using namespace std;

int main() {
    ifstream infile("color.txt");

    if (!infile) {
        throw FIleNotFoundException();
    }

    Picture pic(5, 5);

    int x, y, r, g, b;
 
}

