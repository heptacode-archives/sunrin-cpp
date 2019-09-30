#include<iostream>
using namespace std;
class Shape {
protected:
	int width, height;
public:
	Shape(int w, int h) : width(w), height(h) {}
	virtual int getArea() {
		return 0;
	}
};
class Rectangle : public Shape {
public:
	Rectangle(int w, int h) : Shape(w, h){}
	int getArea() {
		return width * height;
	}
};
class Triangle : public Shape {
public:
	Triangle(int w, int h) : Shape(w, h) {}
	int getArea() {
		return width * height / 2;
	}
};
int main() {
	Shape* p[3] = { new Shape(0, 0), new Rectangle(10, 20), new Triangle(30, 40) };
	for (int i = 0; i < 3; i++)
		cout << "area : " << p[i]->getArea() << endl;
}