class Building {
private:
	int floor;
public:
	Building(int s) { floor = s; }
	// �Ʒ��� �⺻������ �߰� ����
	Building(); // ������ ���� �ۼ�
};
int main() {
	Building twin, star; // floor���� 1�� �ʱ�ȭ
	Building sunrinHouse(4), softHouse(10);
}

// �⺻������ ������
Building::Building() {
	floor = 1;
}