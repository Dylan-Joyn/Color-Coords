#include "Color.h"

const Color Color::RED(255, 0, 0);
const Color Color::YELLOW(255, 255, 0);
const Color Color::BLUE(0, 0, 255);
const Color Color::GREEN(0, 255, 0);
const Color Color::PURPLE(150, 0, 255);
const Color Color::ORANGE(255, 150, 0);
const Color Color::BLACK(0, 0, 0);
const Color Color::WHITE(255, 255, 255);
const Color Color::GRAY(150, 150, 150);

Color::Color(int r, int g, int b) :red(r), green(g), blue(b) {}


void Color::setRed(int r) {
	red = (r < 0) ? 0 : (r > 255) ? 255 : r;

}

void Color::setGreen(int g) {
	green = (g < 0) ? 0 : (g > 255) ? 255 : g;
}

void Color::setBlue(int b) {
	blue = (b < 0) ? 0 : (b > 255) ? 255 : b;
}

ostream& operator<<(ostream& os, const Color& c) {
    if (c.red == c.green && c.green == c.blue) {
        if (c.red > 250) os << 'W';
        else if (c.red < 50) os << 'D';
        else os << 'G';
    }
    else if (c.red >= c.green && c.red > c.blue) os << 'R';
    else if (c.green >= c.red && c.green > c.blue) os << 'V';
    else if (c.blue >= c.red && c.blue > c.green) os << 'B';
    else if (c.red == c.blue && c.red > c.green) os << 'P';
    else if (c.green == c.blue && c.green > c.red) os << 'T';
    else if (c.red == c.green && c.red > c.blue) os << 'Y';
    return os;
}