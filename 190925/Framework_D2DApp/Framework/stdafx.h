
#include <Windows.h>
#include <iostream>

//다이렉트x 관련 헤더
#include <d2d1.h>
#include <d2d1helper.h>

//COM
#include <wincodec.h>

#pragma comment(lib, "d2d1.lib")
#pragma comment(lib, "WindowsCodecs.lib")


#define SAFE_RELEASE(p) { if(p){p->Release();} p=NULL; }
#define SAFE_DELETE(p) {if(p!=nullptr){delete(p);} p=nullptr; }

#define INPUT Framework::GetInstance().GetInputManager()