﻿// Localized-Display.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <locale.h>

int main()
{
	static char ctxt[] = "Display:";
	static wchar_t wtxt[] = L"简体中文的世界。";

	setlocale(LC_CTYPE, "chs");

	printf("Display: %ls\n", wtxt);
    return 0;
}

