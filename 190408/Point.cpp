#include<iostream>
class Point {
public:
	int x, y;
	Point();
	Point(int a, int b);
};
Point::Point() : x(0), y(0) {}
Point::Point(int a, int b) : x(a), y(b) {
	// x = a; y = b;
}
int main(){
	Point saban;
	std::cout << "x : " << saban.x << ", y : " << saban.y << std::endl;
}