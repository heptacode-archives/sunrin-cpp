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
				scene = new Scene();
				scene->Initialize();
				StartGameLoop();
				delete scene;
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

	while (msg.message != WM_QUIT) {
		if (PeekMessage(&msg, 0, 0, 0, PM_REMOVE))
		{
			TranslateMessage(&msg);
			DispatchMessage(&msg);
		}
		scene->Update();
		scene->Render();
	}
}

Framework& Framework::GetInstance()
{
	static Framework f;
	return f;
}

WinApp& Framework::GetWinApp()
{
	return winApp;
}

D2DApp& Framework::GetD2DApp()
{
	return d2dApp;
}

Scene& Framework::GetScene()
{
	return *scene;
}
