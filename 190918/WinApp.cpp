#include "WinApp.h"

WinApp::WinApp():hWnd(NULL), width(0), height(0), isFullScreen(false)
{

}

bool WinApp::Initialize(const wchar_t* title, int width, int height, bool isFullScreen = false)
{
	//������ Ŭ���� ����ü ����
	//�������� �Ӽ� ����
	WNDCLASSEX wc;
	ZeroMemory(&wc, sizeof(WNDCLASSEX));
	wc.cbSize = sizeof(WNDCLASSEX);				//������ Ŭ���� ũ�� �� ���
	wc.style = CS_HREDRAW | CS_VREDRAW;			//ȭ�� ũ�� ���� �ø��� ����, ���� �ٽ� �׸�
	wc.lpfnWndProc = WndProc;					//������ ���ν���(�ݹ�) �Լ� ���
	wc.cbClsExtra = 0;							//������ Ŭ���� ���� ���� ��� X
	wc.cbWndExtra = 0;							//������ Ŭ���� ���� ���� ��� X
	wc.hInstance = GetModuleHandle(NULL);		//������ �ڵ� �޾ƿ�
	wc.hbrBackground = NULL;					//���� ����
	wc.lpszMenuName = NULL;						//�޴� ���� x
	wc.hCursor = LoadCursor(NULL, IDC_ARROW);	//���콺 Ŀ�� �⺻Ŀ��
	wc.lpszClassName = title;					//������ Ŭ���� �̸� ����

	//2. ������ Ŭ������ �ü���� ���
	if (!RegisterClassEx(&wc))
	{
		std::cout << "������ Ŭ���� ��� ����!\n" << std::endl;
		return false;
	}

	//��üȭ�� ����
	int wx, wy;
	RECT windowRect = { 0, };		//������ ũ�� ������ Rect
	DWORD style, exstyle;
	if (isFullScreen)
	{
		wx = wy = 0L;
		windowRect.right = GetSystemMetrics(SM_CXSCREEN);		//ȭ�� ũ�� �޾ƿ�(����)
		windowRect.bottom = GetSystemMetrics(SM_CYSCREEN);		//ȭ�� ũ�� �޾ƿ�(����)
		style = WS_SYSMENU | WS_POPUP;							//������ ��Ÿ�� ����
		exstyle = WS_EX_TOPMOST;
	}
	else
	{
		wx = (GetSystemMetrics(SM_CXSCREEN) - width) / 2;		//������ ��� ��ġ ����(ȭ�� �߾�)
		wy = (GetSystemMetrics(SM_CYSCREEN) - height) / 2;

		windowRect.right = width;								//������ ũ�� ����
		windowRect.bottom = height;
		style = WS_MINIMIZEBOX | WS_SYSMENU | WS_CAPTION;		//������ ��Ÿ�� ����
		exstyle = NULL;
	}

	this->width = width;
	this->height = height;

	//������ �Ӽ� ����
	AdjustWindowRectEx(&windowRect, style, FALSE, exstyle);

	//������ ����
	hWnd = CreateWindowEx(exstyle, title, title, style,
		wx, wy, windowRect.right - windowRect.left, windowRect.bottom - windowRect.top,
		NULL, NULL, wc.hInstance, NULL);

	if (hWnd == NULL)
	{
		std::cout << "������ ���� ����!" << std::endl;
		return false;
	}

	ShowWindow(hWnd, SW_SHOWNORMAL);
	UpdateWindow(hWnd);
	
	return true;
}

LRESULT WinApp::WndProc(HWND hWnd, UINT iMessage, WPARAM wParam, LPARAM lParam)
{
	//������ ���ν��� �Լ�
	//�޽��� ���� ���� �޽����� ���� ��� �����
	switch (iMessage){
	case WM_MOUSEMOVE:
		std::cout << LOWORD(lParam) << " " << HIWORD(lParam) << std::endl;
		break;
	case WM_DESTROY:
		PostQuitMessage(0);
		return 0;
	}
	return DefWindowProc(hWnd, iMessage, wParam, lParam);
}