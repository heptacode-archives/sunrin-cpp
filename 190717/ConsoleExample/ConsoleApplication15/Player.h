#pragma once
class Player
{
public:
	int x;				//���� ��ġ
	int y;				//���� ��ġ
	char icon;			//������ ������ ����
	Player(int y);		//������, y�� �Է¹���
	~Player();
	void Move();		//�����̴� �Լ�
};

