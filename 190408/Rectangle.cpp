#include <iostream>
using namespace std;
class Rectangle {
public:
	int a, b;
	Rectangle();
	Rectangle(int);
	Rectangle(int, int);
	bool isSquare();
};
Rectangle::Rectangle() : Rectangle(1, 1) {

}
Rectangle::Rectangle(int a) { width = height = a; }
Rectangle::Rectangle(int a, int b) : width(a), height(b){
	// width = a, height = b;
}
bool Rectangle::isSquare(){
	if (width == height) return true;
	return false;
}
	
int main(){
	Rectangle rect1;
	Rectangle rect2(3, 5);
	Rectangle rect3(3);

	if (rect1.isSquare()) cout << "rect1�� ���簢���̴�." << endl;
	if (rect2.isSquare()) cout << "rect2�� ���簢���̴�." << endl;
	if (rect3.isSquare()) cout << "rect3�� ���簢���̴�." << endl;

}