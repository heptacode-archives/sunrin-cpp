#pragma once
#include "stdafx.h"

class WinApp
{
public:
	WinApp();
public:
	HWND hWnd;
	int width;
	int height;
	bool isFullScreen;
public:
	bool Initialize(const wchar_t* title, int width, int height, bool isFullScreen);

public:
	static int mX, mY;
	
public:
	static LRESULT CALLBACK WndProc(HWND hWnd, UINT iMessage, WPARAM wParam, LPARAM lParam);

};

