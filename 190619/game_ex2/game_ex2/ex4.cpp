#include<iostream>
using namespace std;

class Oval { // OvalŬ������ "�����": �������� ������
	int width, height;
public:
	Oval();
	Oval(int width, int height);
	int getWidth();
	int getHeight();
};

// OvalŬ������ "������": �ϼ��ϼ���!!!!!!!!!!!!!!!!!!!!!!
Oval::Oval(){ width = 1; height = 1; }
Oval::Oval(int _width, int _height){ width = _width; height = _height; }
int Oval::getWidth(){ return width; }
int Oval::getHeight(){ return height; }

int main() { // main()�Լ�: �������� ������
	Oval a, b(4, 5);
	cout << a.getWidth() << ", ";
	cout << a.getHeight() << endl;
	cout << b.getWidth() << ", ";
	cout << b.getHeight() << endl;
}