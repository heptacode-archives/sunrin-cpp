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
	Person(const Person& obj) {// ���������
		name = obj.name; // ������� : �ֵ��� ��ü -> ������
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
	return obj; // Person Ÿ���� ��ü ��ȯ
}
int main() {
	Person sunrin("Sunrin"); // 1��° ���� ������ �ڵ�ȣ��

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