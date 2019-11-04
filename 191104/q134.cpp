#include <iostream>
#include <string>
using namespace std;
class Rect {
	friend bool equals(Rect a, Rect b);
	int w, h;
public:
	Rect(int _w, int _h) {
		w = _w;
		h = _h;
	}
};
bool equals(Rect a, Rect b) {
	return a.w == b.w && a.h == b.h;
}
int main() {
	Rect a(3, 4), b(4, 5), c(3, 4);
	if (equals(a, b)) cout << "equal" << endl;
	else cout << "not equal" << endl;

	if (equals(a, c)) cout << "equal" << endl;
	else cout << "not equal" << endl;
}