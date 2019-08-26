#include<iostream>
#include<string>
using namespace std;
class Color {
	string c;
public:
	Color() { 
		c = "white"; 
		cout << c << "is created." <<  endl; 
	}
	Color(string c) {  
		this->c  =  c;
	cout  <<  this->c  <<  " is created."  <<  endl;
	}
	~Color() {
		cout  <<  this->c  <<  " is destroyed."  <<  endl;
	}
};
class Palette {
	Color *p;
public:
	Palette() {
		p  =  new Color[3];
	}
	~Palette() {
		delete[] p;
	}
};
int main() {
	Palette *p  =  new Palette();
	delete p;
}
