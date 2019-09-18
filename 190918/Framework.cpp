#include "Framework.h"
#include "WinApp.h"

Framework::Framework() {

}

void Framework::Run(const wchar_t* title, int width, int height, bool isFullScreen) {
	if (winApp.Initialize(title, width, height, isFullScreen)) {
		StartGameLoop();
	}
}
void Framework::StartGameLoop() {
	MSG msg;
	ZeroMemory(&msg, sizeof(MSG));
	while (msg.message != WM_QUIT) {
		if (PeekMessage(&msg, 0, 0, 0, PM_REMOVE)) {
			TranslateMessage(&msg);
			DispatchMessage(&msg);
		}
	}
}