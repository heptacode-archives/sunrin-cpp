#include<iostream>
#include<string>
using namespace std;
class Person {
	char *name;
public:
	Person(char *n) {
		name = new char[strlen(n) + 1]; // null
		strcpy_s(name, strlen(n) + 1, n); // n->name
		cout << "memory allocation ..." << endl;
	}
	Person(const Person&obj){
		name = new char[strlen(obj.name) + 1]; // null
		strcpy_s(name, strlen(obj.name) + 1, obj.name);
		cout << "memory allocation(copy) ..." << endl;
	}
	~Person(){
		delete[] name;
		cout << "memory destroyed ..." << endl;
	}
};
int main(){
	Person obj1("sunrin");
	cout << "---------------" << endl;
	Person obj2(obj1);
	cout << "---------------" << endl;
}