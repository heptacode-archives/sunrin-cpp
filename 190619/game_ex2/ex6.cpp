#include <iostream>
#include <string>
using namespace std;

// 여기에 combine함수를 작성하세요/
void combine(string a, string b, string &c){
	c = a + " " + b;
}

int main() { // main함수 변경 불가
	string a("sunrin"), b("software"), c;
	combine(a, b, c);
	cout << c << endl;
}