#include<iostream>
#include<string>
using namespace std;
class Car { // �Ӽ� : �� ����, ����ӵ� / ���� : ����������
	int speed; // ����ӵ�
	string color; // ������
public:
	Car(int s, string c) : speed(s), color(c){
		// this->speed = s; color = c;
		cout << "normal construstor...." << endl;
	}
	Car(const Car& obj){
		speed = obj.speed;
		color = obj.color;
		cout << "copy construstor...." << endl;
	}
	void printInfo(){
		cout << "--------------------------------" << endl;
		cout << "speed : " << speed << endl;
		cout << "color : " << color << endl;
		cout << "--------------------------------" << endl;
	}
};
int main(){
	Car origin(0, "white");
	origin.printInfo();

	//Car copy(origin);
	Car copy = origin; //
	copy.printInfo();
}