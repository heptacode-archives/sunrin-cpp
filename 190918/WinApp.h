#pragma once
#include <Windows.h>
#include <iostream>
class WinApp
{
public:
	WinApp();
public:
	HWND hWnd;			//������ �ڵ�
	int width;			//�������� ���� ũ��
	int height;			//�������� ���� ũ��
	bool isFullScreen;	//â��� ����
public:
	bool Initialize(const wchar_t* title, int width, int height, bool isFullScreen);
	
public:
	static LRESULT CALLBACK WndProc(HWND hWnd, UINT iMessage, WPARAM wParam, LPARAM lParam);
};