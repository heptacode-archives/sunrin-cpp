#include<iostream>
#include<string>
using namespace std;
class Car {
	string name; // ¸â¹ö º¯¼ö
public:
	Car() { cout << "Car() is called..." << endl; }
	Car(string name) {
		this->name = name;
		cout << "Car(" << name << ") is called..." << endl;
	}
	~Car() { cout << "~Car() is called..." << endl; }
};
class SuperCar : public Car {
public:
	SuperCar() : Car("") { cout << "SuperCar() is called..." << endl; }
	SuperCar(string name) : Car(name) { cout << "SuperCar(string) is called..." << endl; }
	~SuperCar() { cout << "~SuperCar() is called..." << endl; }
};
int main() {
	SuperCar s;
}