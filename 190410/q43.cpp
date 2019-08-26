#include<iostream>
using namespace std;
class CoffeeMachine {
public:
	int beans, h2o, sugar;
	CoffeeMachine(int _beans, int _h2o, int _sugar){
		beans = _beans;
		h2o = _h2o;
		sugar = _sugar;
	}
	void show(){
		cout << "CoffeeMachine state: coffee " << beans << ", water " << h2o << ", sugar " << sugar << endl;
	}
	void drinkEspresso(){
		beans--;
		h2o--;
	}
	void drinkAmericano(){
		beans--;
		h2o -= 2;
	}
	void drinkSugarCoffee(){
		beans--;
		h2o -= 2;
		sugar--;
	}
	void fill(){
		beans = 10;
		h2o = 10;
		sugar = 10;
	}
};
int main(){
	CoffeeMachine java(5, 10, 3);
	java.drinkEspresso();
	java.show();
	java.drinkAmericano();
	java.show();
	java.drinkSugarCoffee();
	java.show();
	java.fill(); // 커피, 물, 설탕 각각 10으로 채우기
	java.show();
}