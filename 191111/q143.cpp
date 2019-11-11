#include<iostream>
using namespace std;
/*
	r == red
	g == green
	b == blue
	bk == black
*/
class Color {
	int r, g, b;
public:
	Color(int r = 0, int g = 0, int b = 0) : r(r), g(g), b(b) {}
	void show() {
		cout << r << " " << g;
		cout << " " << b << endl;
	}
	bool operator == (Color t) {
		return r == t.r && g == t.g && b == t.b;
	}
	Color operator + (Color t) {
		return { r + t.r, g + t.g, b + t.b };
	}
};
int main() {
	Color r(255, 0, 0), b(0, 0, 255);
	Color g(0, 255, 0), c;
	c = r + g + b;
	c.show();
	Color bk(255, 255, 255);
	if (c == bk) cout << "bk\n";
	else cout << "not bk\n";
}