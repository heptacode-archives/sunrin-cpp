#include<iostream>
using namespace std;
#include "Box.h"

Box::Box(int w, int h) {
	width = w;
	height = h;
	fill = '*';
}
void Box::draw() {
	for (int x = 0; x < height; x++) {
		for (int y = 0; y < width; y++)
			cout << fill;
		cout << endl;
	}
}