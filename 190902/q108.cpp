#include <iostream>
#include <string>
using namespace std;
class MyIntStack {
	int p[10]; // �ִ� 10���� �������� ������ �� ����
	int tos; // stack�� ����⸦ ����Ű�� �ε���
public:
	MyIntStack() { tos = 0; }
	bool push(int n) {
		if (tos == 10) return false;
		p[tos++] = n;
		return true;
	}
	bool pop(int& n) {
		if (tos == 0) return false;
		n = p[--tos];
		return true;
	}
};
int main() {
	MyIntStack a;
	for (int i = 0; i < 11; i++) {
		if (a.push(i)) cout << i << " "; // ���� ���� �� �� �� ���
		else cout << endl << "stack full" << endl;
	}
	int n;
	for (int i = 0; i < 11; i++) { // 11��°�� pop �Ұ�(stack empty)
		if (a.pop(n)) cout << n << " "; // pop ���� �� �� �� ���
		else cout << endl << "stack empty" << endl;
	}
	cout << endl;
}