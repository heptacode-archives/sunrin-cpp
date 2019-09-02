#include<iostream>
using namespace std;
class MyIntStack {
	int* p; // stack이 저장될 공간을 가리키는 포인터
	int tos; // stack의 꼭대기 인덱스
	int size; // stack의 최대 크기
public:
	MyIntStack() : MyIntStack(10) {}; // size 값은 10 고정되는 디폴트 생성자
	MyIntStack(int size) { // size 인자값을 갖는 생성자
		this->tos = 0;
		this->size = size;
		this->p = new int[this->size];
	}
	MyIntStack(const MyIntStack& s) { // 복사생성자
		this->tos = s.tos;
		this->size = s.size;
		this->p = new int[this->size];
		for (int i = 0; i < this->size; i++)
			p[i] = s.p[i];
	}
	~MyIntStack() { delete[] p; }
	bool push(int n) { // 정수 n 삽입, 꽉차면 false 아니면 true 반환
		if (tos == size) return false;
		p[tos++] = n;
		return true;
	}
	bool pop(int& n) { // pop해서 n에 저장, 빈 상태면 false 아니면 true 반환
		if (tos == 0) return false;
		n = p[--tos];
		return true;
	}
};
int main() {
	MyIntStack a(10);
	a.push(10);
	a.push(20);
	MyIntStack b = a; // 복사 생성
	b.push(30);

	int n;
	a.pop(n);
	cout << "a : " << n << endl;
	b.pop(n);
	cout << "b : " << n << endl;
}