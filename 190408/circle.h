class Circle {
public:
	int radius;
	Circle() { radius = 1; } // ����Ʈ(�⺻) ������
	Circle(int r) { radius = r; } // ������
	double getArea() { return radius * radius * 3.14; } // �Լ�
};