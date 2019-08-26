#include<iostream>
using namespace std;

class Accumulator {
	int value;
public:
	Accumulator(int value);
	Accumulator& add(int n);
	int getValue();
};

int main() {
	Accumulator acc(10);
	acc.add(5).add(6).add(7);
	cout << acc.getValue();
}

// Accumulator클래스 구현
Accumulator::Accumulator(int value) {
	this->value = value;
}
Accumulator& Accumulator::add(int n) {
	value += n;
	return *this;
}
int Accumulator::getValue() {
	return value;
}