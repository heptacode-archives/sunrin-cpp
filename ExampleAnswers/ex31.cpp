class Building {
private:
	int floor;
public:
	Building(int s) { floor = s; }
	// 아래의 기본생성자 추가 선언
	Building(); // 구현부 별도 작성
};
int main() {
	Building twin, star; // floor값을 1로 초기화
	Building sunrinHouse(4), softHouse(10);
}

// 기본생성자 구현부
Building::Building() {
	floor = 1;
}