#include<iostream>
#include<string>
using namespace std;

void combine(string a, string b, string& c) {
	c = a + " " + b;
}

int main() {
	string test1("sunrin"), test2("software");
	string test3;

	combine(test1, test2, test3);

	cout << test3 << endl;
}