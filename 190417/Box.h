#include <iostream>
using namespace std;
class Box {
	int width, height;
	char fill;
public:
	Box(int, int);
	void setFill(char);
	void setSize(int, int);
	void draw();
};