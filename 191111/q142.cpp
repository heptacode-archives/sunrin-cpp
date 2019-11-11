#include<iostream>
using namespace std;

class Circle {
	int r;
public:
	Circle(int r = 0) : r(r) {}
	void show() {
		cout << "r=" << r << endl;
	}
	Circle operator ++ () {
		r++;
		return this->r;
	}
	Circle operator ++ (int n) {
		Circle t = this->r;
		r++;
		return t;
	}
};
int main() {
	Circle a(2), b(1);
	++a; // ������ 1 ����
	b = a++; // ������ 1 ����
	cout << "a::";
	a.show();
	cout << "b::";
	b.show();
}