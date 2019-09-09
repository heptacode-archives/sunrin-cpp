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
	// �� �Ǵ� ���̽�
	/*Car sunrin("Sunrin");
	SuperCar* pSuperCar = (SuperCar*)& sunrin;
	pSuperCar->setMode("super");
	pSuperCar->printSuperCarInfo();*/

	SuperCar sunrin("Sunrin", "Super");
	Car* pCar = (Car*)& sunrin; // ��ĳ���� == �ڵ� ����ȯ
	pCar->printInfo();

	SuperCar* pSuperCar = (SuperCar*)pCar; // �ٿ�ĳ���� -= ���� ����ȯ
	pSuperCar->printInfo();
}