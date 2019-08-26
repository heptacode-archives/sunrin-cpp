#include <iostream>
using namespace std;
class Color {
	int red, green, blue;
public:
	Color(){
		red = green = blue = 0;
	}
	Color(int red, int green, int blue){
		this->red = red;
		this->green = green;
		this->blue = blue;
	}
	void setColor(int r, int g, int b){
		red = r;
		green = g;
		blue = b;
	}
	void show(){
		cout << red << " " << green << " " << blue << endl;
	}
};
int main(){
	Color test(255, 0, 0); // °´Ã¼
	Color *p; // °´Ã¼Æ÷ÀÎÅÍ

	p = &test; // 1¹ø
	p->show(); // 2¹ø (*p).show();
	Color arr[3]; // 3¹ø °´Ã¼¹è¿­
	p = arr; // 4¹ø

	p[0].setColor(255, 0, 0); // »¡°­ 5¹ø
	p[1].setColor(0, 255, 0); // ÃÊ·Ï		p[1].setColor(0, 255, 0);
	(p + 2)->setColor(0, 0, 255); // ÆÄ¶û	p[2].setColor(0, 255, 255);

	for (int i = 0; i < 3; i++){

	}
}