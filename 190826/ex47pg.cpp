#include<iostream>
#include<string>
using namespace std;
class Person {
	string name;
public:
	Person() {}
	Person(string n) : name(n) {
		cout << "Normal Constructor is called..." << endl;
	}
	Person(const Person& obj) {// 복사생성자
		name = obj.name; // 복사생성 : 쌍둥이 객체 -> 변수값
		cout << "Copy Constructor is called..." << endl;
	}
	string getName() {
		return name;
	}
	void setName(string name) {
		this->name = name;
	}
};
void changeName(Person obj) {
	obj.setName("software");
	cout << "changeName Sunrin name : " << obj.getName() << endl;
}
Person createSunrin() {
	Person obj("seoul");
	return obj; // Person 타입의 객체 반환
}
int main() {
	Person sunrin("Sunrin"); // 1번째 복사 생성자 자동호출

	//Person copy = sunrin;
	Person copy;
	copy = sunrin;
	cout << copy.getName() << endl;

	//Person software(sunrin); // Person software = sunrin;
	//cout << "software name : " << software.getName() << endl;

	/*cout << "sunrin : " << sunrin.getName() << endl;
	changeName(sunrin);
	cout << "sunrin : " << sunrin.getName() << endl;
	sunrin = createSunrin();
	cout << "createSunrin() : " << sunrin.getName() << endl;*/
}