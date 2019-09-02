#include <iostream>
#include <string>
using namespace std;
class MyIntStack {
	int p[10]; // 최대 10개의 정수값을 저장할 수 있음
	int tos; // stack의 꼭대기를 가리키는 인덱스
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
		if (a.push(i)) cout << i << " "; // 삽입 성공 시 그 값 출력
		else cout << endl << "stack full" << endl;
	}
	int n;
	for (int i = 0; i < 11; i++) { // 11번째는 pop 불가(stack empty)
		if (a.pop(n)) cout << n << " "; // pop 성공 시 그 값 출력
		else cout << endl << "stack empty" << endl;
	}
	cout << endl;
}