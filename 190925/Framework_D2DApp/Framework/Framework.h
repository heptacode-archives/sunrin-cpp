#pragma once
#include "WinApp.h"
#include "D2DApp.h"
class Framework
{
public:
	Framework();
public:
	WinApp winApp;
	D2DApp d2dApp;

public:
	void Run(const wchar_t* title, int width, int height, bool isFullScreen);

private:
	void StartGameLoop();

public:
	static Framework& GetInstance();
};
