#pragma once
#include "WinApp.h"
class Framework {
public:
	Framework();
	~Framework();
public:
	WinApp winApp;
public:
	void Run(const wchar_t* title, int width, int height, bool isFullScreen);
public:
	void StartGameLoop();
};
