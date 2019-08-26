#include <iostream>
using namespace std;
class MyClass {
	int size;
	int* element;
public:
	MyClass(int s) {
		size = s;
		element = new int[size];
		for (int i = 0; i < size; i++) {
			element[i] = i * 3;
		}
	}
	MyClass(const MyClass& myClass) {
		size = myClass.size;
		element = new int[size];
		for (int i = 0; i < size; i++) {
			element[i] = myClass.element[i];
		}
	}
	~MyClass() { delete[] element; }
	void printInfo() {
		for (int i = 0; i < size; i++) {
			cout << element[i] << " ";
		}
		cout << endl;
	}
};
int main() {
	MyClass origin(3);
	MyClass copy(origin);
	copy.printInfo();
}