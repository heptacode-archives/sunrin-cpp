#include<iostream>
using namespace std;
class Add {
	int a, b;
public:
	void setValue(int x, int y) {
		a = x;
		b = y;
	}
	int calculate() {
		return a + b;
	}
};
class Sub {
	int a, b;
public:
	void setValue(int x, int y) {
		a = x;
		b = y;
	}
	int calculate() {
		return a - b;
	}
};
class Mul {
	int a, b;
public:
	void setValue(int x, int y) {
		a = x;
		b = y;
	}
	int calculate() {
		return a * b;
	}
};
class Div {
	int a, b;
public:
	void setValue(int x, int y) {
		a = x;
		b = y;
	}
	int calculate() {
		return a / b;
	}
};

int main() {
	Add a; 
	Sub s;
	Mul m;
	Div d;
	int num1, num2;
	char op;

	cout << "input>> ";
	cin >> num1;
	cin >> num2;
	cin >> op;

	switch (op) {
	case '+' : 
		a.setValue(num1, num2);
		cout << a.calculate() << endl;
		break;
	case '-':
		s.setValue(num1, num2);
		cout << s.calculate() << endl;
		break;
	case '*':
		m.setValue(num1, num2);
		cout << m.calculate() << endl;
		break;
	case '/':
		d.setValue(num1, num2);
		cout << d.calculate() << endl;
		break;
	default:
		cout << "error" << endl;
	}
}