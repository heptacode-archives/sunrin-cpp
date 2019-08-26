#include<iostream>
using namespace std;

// 클래스 선언부
class Oval {
	int width, height;
public:
	Oval();
	Oval(int w, int h);
	~Oval();
	int getWidth();
	int getHeight();
	void set(int x, int y);
	void show();
};

// 클래스 구현부
Oval::Oval() {
	width = 1;
	height = 1;
}
Oval::Oval(int w, int h) {
	width = w;
	height = h;
}
Oval::~Oval() {
	cout << "Oval finish : ";
	cout << "width = " << width;
	cout << ", height = " << height;
	cout << endl;
}
int Oval::getWidth() {
	return width;
}
int Oval::getHeight() {
	return height;
}
void Oval::set(int x, int h) {
	width = x;
	height = h;
}
void Oval::show() {
	cout << "width = " << width;
	cout << ", height = " << height;
	cout << endl;
}

int main() {
	Oval a, b(3, 4);
	a.set(10, 20);
	a.show();
	cout << b.getWidth() << ", " << b.getHeight() << endl;
}