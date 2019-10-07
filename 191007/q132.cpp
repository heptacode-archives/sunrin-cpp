#include<iostream>
using namespace std;
class Gate {
protected:
	int x, y;
public:
	void set(bool _x, bool _y) { x = _x; y = _y; }
	virtual bool operation() = 0;
};
class AndGate : public Gate {
public:
	bool operation() { return x & y; }
};
class OrGate : public Gate {
public:
	bool operation() { return x | y; }
};
class XorGate : public Gate {
public:
	bool operation() { return x ^ y; }
};
int main() {
	AndGate andGate;
	OrGate orGate;
	XorGate xorGate;
	bool x = true, y = false;

	andGate.set(x, y);
	orGate.set(x, y);
	xorGate.set(x, y);

	cout.setf(ios::boolalpha);
	cout << andGate.operation() << endl;
	cout << orGate.operation() << endl;
	cout << xorGate.operation() << endl;
}