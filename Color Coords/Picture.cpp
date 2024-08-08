#include "Picture.h"
Picture::Picture(int width, int height) {
	image = vector<vector<Color>>(height, vector<Color>(width, Color::WHITE));
}

void Picture::setPixel(int x, int y, const Color& c) {
	if (x >= 0 && y >= 0 && y < image.size() && x < image[0].size()) {
		image[y][x] = c;
	}
}

ostream& operator<<(ostream& os, const Picture& p) {
	for (const auto& row : p.image) {
		for (const auto& pixel : row) {
			os << pixel << ' ';
		}
		os << endl;
	}
	return os;
}