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
    while (infile >> x >> y >> r >> g >> b) {
        if (infile.fail()) {
            throw ColorFileFormatException();
        }
        try {
            if (x < 0 || y < 0) {
                throw CoordinateOutOfRangeException();
            }

            Color color(r, g, b);
            if (r < 0 || r > 255 || g < 0 || g > 255 || b < 0 || b > 255) {
                string message = "Error! X: " + to_string(x) + " Y: " + to_string(y);
                if (r < 0 || r > 255) message += " Red value out of field: " + to_string(r);
                if (g < 0 || g > 255) message += " Green value out of field: " + to_string(g);
                if (b < 0 || b > 255) message += " Blue value out of field: " + to_string(b);
                throw ColorVectorOutOfRangeException(message);
            }

            pic.setPixel(x, y, color);
        }
        catch (const ColorVectorOutOfRangeException& e) {
            cout << e.what() << endl;
        }
        catch (const CoordinateOutOfRangeException& e) {
            cout << e.what() << endl;
        }
    }

    cout << pic;

}

