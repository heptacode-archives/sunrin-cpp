#include<iostream>
#include<string>
using namespace std;
class Car {
	string name;
public:
	Car(string name) { this->name = name; }
	string getName() { return name; }
	void setName(string name) {
		this->name = name;
	}
	void printInfo() {
		cout << "Car name : " << name << endl;
	}
};
class SuperCar : public Car {
	string mode;
public:
	SuperCar(string name, string mode) : Car(mode) {
		this->mode = mode;
	}
	void setMode(string mode) {
		this->mode = mode;
	}
	void printInfo() {
		cout << "Car name : " << getName() << endl;
		cout << "Car mode : " << mode << endl;
	}
};
int main() {
	// 안 되는 케이스
	/*Car sunrin("Sunrin");
	SuperCar* pSuperCar = (SuperCar*)& sunrin;
	pSuperCar->setMode("super");
	pSuperCar->printSuperCarInfo();*/

	SuperCar sunrin("Sunrin", "Super");
	Car* pCar = (Car*)& sunrin; // 업캐스팅 == 자동 형변환
	pCar->printInfo();

	SuperCar* pSuperCar = (SuperCar*)pCar; // 다운캐스팅 -= 강제 형변환
	pSuperCar->printInfo();
}