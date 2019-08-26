#include<iostream>
using namespace std;
class Point {
	int x, y;
public:
	void setX(int _x) {
		if (_x >= 0 && _x <= 10)
			x = _x;
		else
			x = 0;
	}
	void setY(int _y) {
		if (_y >= 0 && _y <= 10)
			y = _y;
		else
			y = 0;
	}
	int getX() { return x; }
	int getY() { return y; }

};
int main() {
	int xx, yy;
	Point px;
	cout << "Input x>> ";
	cin >> xx;
	cout << "Input y>> ";
	cin >> yy;

	px.setX(xx);
	px.setY(yy);

	cout << "Point(x,y) is (" << px.getX() << "," << px.getY() << ")" << endl;
}
