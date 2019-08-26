#include <iostream>
using namespace std;
int main(){
	int a = 10;
	int &b = a; // a, b가 같은 변수명
	int *p = &b; // a, b
	*p = *p + 1;
	a = a + 1;

	cout << a;
}