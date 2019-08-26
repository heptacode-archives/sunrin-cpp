#include<iostream>
using namespace std;
class Oval {
public:
	int width, height;
	Oval();
	Oval(int, int);
	~Oval();

	int getWidth();
	int getHeight();
	void set(int, int);
	void show();
};
Oval::Oval() :Oval(1, 1) {}
Oval::Oval(int _width, int _height){
	width = _width;
	height = _height;
}
int Oval::getWidth(){
	return width;
}
int Oval::getHeight(){
	return height;
}
void Oval::set(int _width, int _height){
	width = _width;
	height = _height;
}
void Oval::show(){
	cout << "width = " << width << ", height = " << height << endl;
}
Oval::~Oval(){
	cout << "Oval finish : width = " << width << ", height = " << height << endl;
}

int main(){
	Oval a, b(3, 4);
	a.set(10, 20);
	a.show();
	cout << b.getWidth() << ", " << b.getHeight() << endl;
}