#include<iostream>
using namespace std;

class CoffeeMachine {
	int coffee, water, sugar;
public:
	CoffeeMachine(int c, int w, int s) {
		coffee = c;
		water = w;
		sugar = s;
	}
	void drinkEspresso() {
		coffee--;
		water--;
	}
	void drinkAmericano() {
		coffee--;
		water -= 2;
	}
	void drinkSugarCoffee() {
		coffee--;
		water -= 2;
		sugar--;
	}
	void show() {
		cout << "CoffeeMachine state: ";
		cout << "coffee " << coffee;
		cout << ", water " << water;
		cout << ", sugar " << sugar;
		cout << endl;
	}
	void fill() {
		coffee = water = sugar = 10;
	}
};

int main() {
	CoffeeMachine java(5, 10, 3);
	java.drinkEspresso();
	java.show();
	java.drinkAmericano();
	java.show();
	java.drinkSugarCoffee();
	java.show();
	java.fill();
	java.show();
}