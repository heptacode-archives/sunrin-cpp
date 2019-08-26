#include <iostream>
#include <string>
using namespace std;
class Date {
	int y;
	int m;
	int d;
public:
	Date() {
		y = 2019;
		m = 3;
		d = 1;
	}
	Date(const Date& date) {
		cout << "Copy contructor is called..." << endl;
		y = date.y;
		m = date.m;
		d = date.d;
	}
	void setMonth(int _m) {
		m = _m;
	}
	void printInfo() {
		cout << this->y << this->m << this->d << endl;
	}
};
int main(){
	Date origin; // 2019.3.1
	origin.printInfo();

	origin.setMonth(9);
	Date copy(origin);
	copy.printInfo();
}