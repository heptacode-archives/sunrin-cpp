#include <iostream>
#include <string>
using namespace std;

class Person {
	string name;
public:
	Person(string n){ name = n; }
	string getName(){ return name; }
};
class Family {
	Person *p; // Person 타입의 배열 포인터
	int size; // Person 타입의 객체배열의 크기 (가족 구성원 수)
	string FamilyName; // 생성자를 통해 fname으로 값 초기화
public:
	Family(string fname, int size); // size 개수만큼 Person 배열 동적할당
	void show(){ // 실행예시와 같이 가족 인원수 및 구성원들 이름 출력
		cout << "Number of Sunrin is";
	};
	void setName(int index, string name);
};
int main(){
	Family *sunrin = new Family("Sunrin", 3);
	sunrin->setName(0, "jeongtae");
	sunrin->setName(1, "sooin");
	sunrin->setName(2, "jaemin");
	sunrin->show();
	delete sunrin;
}