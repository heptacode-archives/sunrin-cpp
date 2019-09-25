#include "stdafx.h"
#include "Framework.h"

Framework::Framework()
{
}

void Framework::Run(const wchar_t* title, int width, int height, bool isFullScreen)
{
	if (SUCCEEDED(CoInitialize(NULL)))
	{
		if (winApp.Initialize(title, width, height, isFullScreen))
		{
			if (d2dApp.Initialize())
			{
				StartGameLoop();
				d2dApp.Uninitialize();
			}
		}
		CoUninitialize();
	}
}

void Framework::StartGameLoop()
{
	MSG msg;
	ZeroMemory(&msg, sizeof(MSG));

	d2dApp.LoadBitmapFromFile(L"a.png", 0, 0, &d2dApp.example);

	while (msg.message != WM_QUIT) {
		if (PeekMessage(&msg, 0, 0, 0, PM_REMOVE))
		{
			TranslateMessage(&msg);
			DispatchMessage(&msg);
		}
		d2dApp.Render();
	}
}

Framework& Framework::GetInstance()
{
	static Framework f;
	return f;
}
