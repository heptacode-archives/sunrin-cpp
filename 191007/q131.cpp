#include<iostream>
using namespace std;
class LoopAdder {
	int x, y, sum;
	void read() {
		cout << "Input two Integer : ";
		cin >> x >> y;
	}
	void write() {
		cout << x << "~" << y << "=" << sum << endl;
	}
protected:
	int getX() { return x; }
	int getY() { return y; }
	virtual int calculate() = 0;
public:
	void run() {
		read();
		sum = calculate();
		write();
	}
};
class ForLoopAdder : public LoopAdder {
	int sum = 0;
public:
	int calculate() {
		for (int i = getX(); i <= getY(); i++)
			sum += i;
		return sum;
	}
};

int main() {
	ForLoopAdder f;
	f.run();
}