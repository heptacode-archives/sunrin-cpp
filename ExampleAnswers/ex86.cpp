#include<iostream>
using namespace std;

char& find(char a[], char c, bool& success);

int main() {
	char str[] = "sunriN";
	bool b = false;
	char &loc = find(str, 'N', b);

	if (b == false) {
		cout << "N does not exist." << endl;
		return 0;
	}
	loc = 'n';
	cout << str << endl;
}

char& find(char a[], char c, bool& success) {
	for (int x = 0; a[x] != NULL; x++) {
		if (a[x] == c) {
			success = true;
			return a[x];
		}
	}

	return a[0];
}