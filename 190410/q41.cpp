#include<iostream>
using namespace std;
class Add {
	int a, b;
	void setValue(int _a, int _b){
        a = _a;
		b = _b;
    }
	int calculate(){
        return a + b;
    }
};
class Sub {
	int a, b;
	void setValue(int _a, int _b){
		a = _a;
		b = _b;
	}
	int calculate(){
        return a - b;
    }
};
class Mul {
	int a, b;
	void setValue(int _a, int _b){
		a = _a;
		b = _b;
	}
	int calculate(){
        return a * b;
    }
};
class Div {
	int a, b;
	void setValue(int _a, int _b){
		a = _a;
		b = _b;
	}
	int calculate(){
        return a / b;
    }
};

int main(){
	Add a;
	Sub s;
	Mul m;
	Div d;
	int n1, n2, op;
	cin >> n1;
	cin >> n2;
	cin >> op;
	switch (op){
		case '+':
			a.setValue(n1, n2);
            cout << a.calculate() << endl;
			break;

		case '-':
			s.setValue(n1, n2);
            cout << s.calculate() << endl;
			break;

		case '*':
			m.setValue(n1, n2);
            cout << m.calculate() << endl;
			break;

		case '/':
			d.setValue(n1, n2);
            cout << d.calculate() << endl;
			break;
	}
}