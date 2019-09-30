#include<iostream>
using namespace std;
// 다중상속 : 융합의 시대 : tiger + lion = liger
class cat {
public:
	bool isCat;
	virtual void say() {
		cout << "I can speak." << endl;
	}
};
class tiger : virtual public cat {
public:
	bool stripe;
	void say() {
		cout << "I am a Tiger." << endl;
	}
};
class lion : virtual public cat {
public:
	bool longHair;
	void say() {
		cout << "I am a Lion." << endl;
	}
};
class liger : public tiger, public lion {
	void say() {
		cout << "I am a Liger." << endl;
	}
};
int main() {
	//cat* l = new liger; // 업캐스팅
	cat* l[4] = { new cat, new lion, new tiger, new liger };
	for (int i= 0; i < 4; i++)
		l[i]->say();
	/*liger l;
	l.longHair = true;
	l.stripe = true;
	if (l.longHair == true && l.stripe == true)
		cout << "I am a Liger" << endl;
	l.isCat = true;
	if (l.isCat == true)
		cout << "cat" << endl;*/
}