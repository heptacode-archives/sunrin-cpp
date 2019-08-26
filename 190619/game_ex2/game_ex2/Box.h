
class Box {
	int width, height; // 박스의 가로, 세로 길이
	char fill; // 박스의 내부를 채우는 문자
public:
	Box(int w, int h);
	void draw();
};