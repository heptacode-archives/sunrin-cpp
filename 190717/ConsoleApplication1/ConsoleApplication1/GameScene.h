#pragma once
class GameScene
{
public:
	Player* p1; // �÷��̾� 1
	Player* p2; // �÷��̾� 2

	int width; // ���� ���������� ����

	GameScene();
	~GameScene();

	void PrintLine(); // ��� ���� ���� �׸��� �Լ�
	void CountDown(); // ī��Ʈ�ٿ�
	void PlayGame(); // ������ ����� �Լ�
	void Ending(); // ���� �׸�
};

