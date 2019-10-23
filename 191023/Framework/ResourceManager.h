#pragma once
#include "stdafx.h"

struct Sprite {
	const wchar_t* uri;
	ID2D1Bitmap* bitmap;	//��Ʈ���� ����Ǿ��ִ� ������
};


//���� �̹����� ������ �ε��ϴ� ���� �����ϱ� ���� ��ü.
class ResourceManager
{
public:
	~ResourceManager();
public:
	std::list<Sprite*> spriteList;		//�̹����� ������ ����Ʈ
	Sprite* LoadBitmapFromFile(PCWSTR uri, UINT destinationWidth, UINT destinationHeight);
};

