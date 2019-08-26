#include<iostream>
using namespace std;

class Oval { // Oval클래스의 "선언부": 변경하지 마세요
	int width, height;
public:
	Oval();
	Oval(int width, int height);
	int getWidth();
	int getHeight();
};

// Oval클래스의 "구현부": 완성하세요!!!!!!!!!!!!!!!!!!!!!!
Oval::Oval(){ width = 1; height = 1; }
Oval::Oval(int _width, int _height){ width = _width; height = _height; }
int Oval::getWidth(){ return width; }
int Oval::getHeight(){ return height; }

int main() { // main()함수: 변경하지 마세요
	Oval a, b(4, 5);
	cout << a.getWidth() << ", ";
	cout << a.getHeight() << endl;
	cout << b.getWidth() << ", ";
	cout << b.getHeight() << endl;
}