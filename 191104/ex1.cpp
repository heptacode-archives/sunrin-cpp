#include <iostream>
#include <string>
using namespace std;
class Sunrin {
	//friend void print(Sunrin& obj); // ������ �Լ�(�ܺ������Լ�) ����
	friend class A; // A Ŭ������ �Լ����� �����Ӱ� Sunrin ����� ����
private:
	string name; // ���
public:
	Sunrin(string n) {
		name = n;
	}
	void printName() {
		cout << "name : " << name << endl;
	}
};
class A { // Sunrin Ŭ������ ������� A Ŭ������ �Լ����� �����Ӱ� ����
public:
	void print(Sunrin& obj) { // �ܺ� �Լ�
		cout << obj.name << endl;
	}
	// �Լ��� :
};
int main() {
	Sunrin soft("software");
	A obj;
	// soft.printName(); // ��� software
	// print(soft); // 
	obj.print(soft); // soft.printName(); // ��� : software
}