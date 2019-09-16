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
	Animal* p = new Cat; // 업캐스팅
	//p->meow --> 불가.

	Cat* pc = (Cat*)p; // 다운캐스팅
	p->meow();
}