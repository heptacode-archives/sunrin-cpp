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
// year�� 10���� �ʱ�ȭ�ϴ� �⺻������
MyCalendar::MyCalendar() {
	year = 10;
}
// year���� �����ϴ� getYear()�Լ�
int MyCalendar::getYear() {
	return year;
}