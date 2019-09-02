#include<iostream>
using namespace std;
class MyIntStack {
	int* p; // stack�� ����� ������ ����Ű�� ������
	int tos; // stack�� ����� �ε���
	int size; // stack�� �ִ� ũ��
public:
	MyIntStack() : MyIntStack(10) {}; // size ���� 10 �����Ǵ� ����Ʈ ������
	MyIntStack(int size) { // size ���ڰ��� ���� ������
		this->tos = 0;
		this->size = size;
		this->p = new int[this->size];
	}
	MyIntStack(const MyIntStack& s) { // ���������
		this->tos = s.tos;
		this->size = s.size;
		this->p = new int[this->size];
		for (int i = 0; i < this->size; i++)
			p[i] = s.p[i];
	}
	~MyIntStack() { delete[] p; }
	bool push(int n) { // ���� n ����, ������ false �ƴϸ� true ��ȯ
		if (tos == size) return false;
		p[tos++] = n;
		return true;
	}
	bool pop(int& n) { // pop�ؼ� n�� ����, �� ���¸� false �ƴϸ� true ��ȯ
		if (tos == 0) return false;
		n = p[--tos];
		return true;
	}
};
int main() {
	MyIntStack a(10);
	a.push(10);
	a.push(20);
	MyIntStack b = a; // ���� ����
	b.push(30);

	int n;
	a.pop(n);
	cout << "a : " << n << endl;
	b.pop(n);
	cout << "b : " << n << endl;
}