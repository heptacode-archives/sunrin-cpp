#include <iostream>
#include <string>
using namespace std;

// ���⿡ combine�Լ��� �ۼ��ϼ���/
void combine(string a, string b, string &c){
	c = a + " " + b;
}

int main() { // main�Լ� ���� �Ұ�
	string a("sunrin"), b("software"), c;
	combine(a, b, c);
	cout << c << endl;
}