#pragma once
#ifndef HUMAN_H
#define HUMAN_H

class Human { // struct ����Ʈ ����������(����������) : public
private: //�־ ��� ��    // class  ����Ʈ ����������; private
	int eye; // �������
	// ������ : �����ε�
public:
	Human();
	Human(int e); // �翭�� ���ؼ� : 3X3Eyes - �������� �Ϻ�
	// setter�Լ� : ��������� ���� �������ִ� �Լ� : set������(�ڷ��� ��);
	void setEye(int e);
	// getter�Լ� : ������� ���� �޾ƿ��� ���� �Լ�: �ڷ��� get������(void)
	int getEye(void);
};