#include <iostream>
using namespace std;
class Cube {
	double width;
public:
	Cube() {

	}
	Cube(const Cube& cube) {
		cout << "Copy contructor is called..." << endl;
		width = cube.width;
	}
	double getWidth() { return width; }
	double getVolume() { return width * width * width; }
};
int main() {
	Cube c1;
	cout << "c1 volume : " << c1.getVolume() << endl;
	Cube c2(2);
	cout << "c2 volume : " << c2.getVolume() << endl;
	Cube c3(c2);
	cout << "c3 volume : " << c3.getVolume() << endl;
}