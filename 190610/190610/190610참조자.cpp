#include<iostream>
using namespace std;
class Circle {z
	int radius;
public:
	Circle(){ radius = 1; }
	Circle(int radius){ this->radius = radius; }
	double getArea(){ return 3.14*radius*radius; } // inline
};
void addone(const int &num){ }
int main(){
	int a(1); // a = 1;
	Circle b(3);
	Circle c = b;
	cout << b.getArea() << endl;


	//// 참조형 변수
	//int a = 1; // 정수형 변수
	//int &b = a; // 참조형변수 b는 a의 별명이다
	///*Circle c;
	//Circle &d = c;*/
	//cout << d.getArea() << endl;
}