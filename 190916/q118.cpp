#include<iostream>
using namespace std;
class A {
	int a;
protected: void setA(int a) { this->a = a; }
public: void showA() { cout << a << endl; }
};
class B : private A {
	int b;
protected:
	void setB(int b) { this->b = b; }
public:
	void showB() {
		setA(100); // 1
		showA(); // 2
	}
};
class C : private B {
	int c;
protected:
	void showC(int c) {
		setA(c); // 3
		showA(); // 4
		setB(c); // 5
	}
};
int main() {
	//»ý·«
}