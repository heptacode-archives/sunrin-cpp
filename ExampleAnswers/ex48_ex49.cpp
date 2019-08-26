#include<iostream>
using namespace std;

class Point {
	int x, y;
public:
	void setX(int _x) {
		if (x >= 0 && x <= 10)
			x = _x;
		else
			x = 0;
	}
	void setY(int _y) {
		if (y >= 0 && y <= 10)
			y = _y;
		else
			y = 0;
	}
	int getX() {
		return x;
	}
	int getY() {
		return y;
	}
};

int main() {
	int x, y;
	Point obj;

	cout << "Input X>> ";
	cin >> x;
	cout << "Input Y>> ";
	cin >> y;

	obj.setX(x);
	obj.setY(y);

	cout << "Point(x,y) is ";
	cout << "(" << x;
	cout << "," << y << ")." << endl;
}