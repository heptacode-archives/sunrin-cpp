#include<iostream>
using namespace std;
class Adder {
protected:
	int add(int x, int y) { return x + y; }
};
class Substractor {
protected:
	int sub(int x, int y) { return x - y; }
};
class Calculator : public Adder, public Substractor {
public:
	int calculate(char op, int x, int y) {
		if (op == '+') return x + y;
		return x - y;
	}
};
int main() {
	Calculator c;
	int x, y;
	cout << "Input one int : "; cin >> x;
	cout << "Input one int : "; cin >> y;
	cout << x << " + " << y << " = " << c.calculate('+', x, y) << endl;
	cout << x << " - " << y << " = " << c.calculate('-', x, y) << endl;
}