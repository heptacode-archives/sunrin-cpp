#include<iostream>
using namespace std;

class Point {
	int x, y;
public:
	Point(int x = 0, int y = 0) {
		this->x = x;
		this->y = y;
	}
	bool operator == (Point b) {
		if (x == b.x && y == b.y) return true;
		else return false;
	}
	void show() {
		cout << "x : " << x << ", y : " << y << endl;
	}
	/*Point operator+(Point b) {
		Point tmp;
		tmp.x = x + b.x;
		tmp.y = y + b.y;
		return tmp;
	}*/
	friend Point operator+(Point a, Point b);
};
Point operator+(Point a, Point b) {
	Point tmp;
	tmp.x = a.x + b.x;
	tmp.y = b.x + b.y;
	return tmp;
}
int main() {
	Point a(1, 2), b(3, 4), c;
	c = a + b;
	c.show();

	if (a == b)
		cout << "equal" << endl;
	else
		cout << "not equal" << endl;
}