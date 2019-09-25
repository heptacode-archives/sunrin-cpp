#pragma once
#include "stdafx.h"

struct Sprite {
	const wchar_t* uri;
	ID2D1Bitmap* bitmap;
};


class ResourceManager
{
public:
	~ResourceManager();
public:
	std::list<Sprite*> spriteList;
	Sprite* LoadBitmapFromFile(PCWSTR uri, UINT destinationWidth, UINT destinationHeight);
};

