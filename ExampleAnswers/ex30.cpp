#include<iostream>
using namespace std;
class MyCalendar {
private:
	int year;
public:
	MyCalendar();
	int getYear();
};
int main() {
	MyCalendar sunrin;
	cout << sunrin.getYear();
	return 0;
}
//----------------------------------
// year를 10으로 초기화하는 기본생성자
MyCalendar::MyCalendar() {
	year = 10;
}
// year값을 리턴하는 getYear()함수
int MyCalendar::getYear() {
	return year;
}