#include "stdafx.h"
#include "Framework.h"

int main()
{
	Framework& f = Framework::GetInstance();
	f.Run(new Scene(),L"Ÿ��Ʋ", 800, 600, false);

	return 0;
}