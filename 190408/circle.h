class Circle {
public:
	int radius;
	Circle() { radius = 1; } // 디폴트(기본) 생성자
	Circle(int r) { radius = r; } // 생성자
	double getArea() { return radius * radius * 3.14; } // 함수
};