#pragma once
#include <Windows.h>
#include <iostream>
class WinApp
{
public:
	WinApp();
public:
	HWND hWnd;			//윈도우 핸들
	int width;			//윈도우의 가로 크기
	int height;			//윈도우의 세로 크기
	bool isFullScreen;	//창모드 여부
public:
	bool Initialize(const wchar_t* title, int width, int height, bool isFullScreen);
	
public:
	static LRESULT CALLBACK WndProc(HWND hWnd, UINT iMessage, WPARAM wParam, LPARAM lParam);
};