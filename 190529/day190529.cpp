#include <iostream>
using namespace std;
int main(){
	int a = 10;
	int &b = a; // a, b�� ���� ������
	int *p = &b; // a, b
	*p = *p + 1;
	a = a + 1;

	cout << a;
}