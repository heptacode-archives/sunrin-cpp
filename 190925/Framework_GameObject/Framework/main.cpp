#include "stdafx.h"
#include "Framework.h"

int main()
{
	Framework& f = Framework::GetInstance();
	f.Run(new Scene(),L"≈∏¿Ã∆≤", 800, 600, false);

	return 0;
}