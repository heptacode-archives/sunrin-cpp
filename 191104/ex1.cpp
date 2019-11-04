#include <iostream>
#include <string>
using namespace std;
class Sunrin {
	//friend void print(Sunrin& obj); // 프렌드 함수(외부전역함수) 선언
	friend class A; // A 클래스의 함수들이 자유롭게 Sunrin 멤버들 접근
private:
	string name; // 멤버
public:
	Sunrin(string n) {
		name = n;
	}
	void printName() {
		cout << "name : " << name << endl;
	}
};
class A { // Sunrin 클래스의 멤버들을 A 클래스의 함수들이 자유롭게 접근
public:
	void print(Sunrin& obj) { // 외부 함수
		cout << obj.name << endl;
	}
	// 함수들 :
};
int main() {
	Sunrin soft("software");
	A obj;
	// soft.printName(); // 출력 software
	// print(soft); // 
	obj.print(soft); // soft.printName(); // 출력 : software
}