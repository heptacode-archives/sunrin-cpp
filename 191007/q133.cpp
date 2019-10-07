#include<iostream>
#include<string>
using namespace std;
class Shape {
	string n;
protected:
	int w, h;
public:
	Shape(string n, int w, int h) : n(n), w(w), h(h) {}
	virtual double getArea() = 0;
	string getName() { return n; }
};
class Rectangle : public Shape {
public:
	Rectangle(string n, int w, int h) : Shape(n, w, h) {}
	double getArea() {
		return w * h;
	}
};
class Triangle : public Shape {
public:
	Triangle(string n, int w, int h) : Shape(n, w, h) {}
	double getArea() {
		return w * h;
	}
};

int main() {
	Shape* p[4];
	p[0] = new Rectangle("rectangle", 10, 20);
	p[1] = new Triangle("rectangle", 30, 40);
	p[2] = new Triangle("rectangle", 50, 60);
	p[3] = new Rectangle("rectangle", 70, 80);
	for (int i = 0; i < 4; i++) {
		cout << p[i]->getName() << "area : ";
		cout << p[i]->getArea() << endl;
	}
	for (int i = 0; i < 4; i++) delete p[i];
}