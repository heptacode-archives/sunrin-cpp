#include<iostream>
using namespace std;
class Animal {
public:
	void meow() { cout << "Animal"; }
};
class Cat : public Animal {
public:
	void meow() { cout << "Meow"; }
};

int main() {
	Animal* p = new Cat; // ��ĳ����
	//p->meow --> �Ұ�.

	Cat* pc = (Cat*)p; // �ٿ�ĳ����
	p->meow();
}