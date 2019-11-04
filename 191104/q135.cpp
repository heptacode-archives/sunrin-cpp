#include <iostream>
#include <string>
using namespace std;
class Rect {
	friend class RectManager;
	int w, h;
public:
	Rect(int w, int h) : w(w), h(h) {}
};
class RectManager {
public:
	bool equals(Rect a, Rect b) {
		return a.w == b.w && a.h == b.h;
	}
	void copy(Rect& dest, Rect& src) {
		dest.w = src.w;
		dest.h = src.h;
	}
};
int main() {
	Rect a(3, 4), b(5, 6);
	RectManager sunrin;
	sunrin.copy(b, a);
	if (sunrin.equals(a, b)) cout << "equal" << endl;
	else cout << "not equal" << endl;
}