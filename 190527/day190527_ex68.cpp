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
	Color test(255, 0, 0); // ��ü
	Color *p; // ��ü������

	p = &test; // 1��
	p->show(); // 2�� (*p).show();
	Color arr[3]; // 3�� ��ü�迭
	p = arr; // 4��

	p[0].setColor(255, 0, 0); // ���� 5��
	p[1].setColor(0, 255, 0); // �ʷ�		p[1].setColor(0, 255, 0);
	(p + 2)->setColor(0, 0, 255); // �Ķ�	p[2].setColor(0, 255, 255);

	for (int i = 0; i < 3; i++){

	}
}