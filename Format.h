#pragma once

#include <iostream>
#include <Windows.h>

struct Format
{
	static void SetConsoleColor(WORD COLOR);
	static void SetBlueText();
	static void SetGreenText();
	static void SetRedText();
	static void SetWhiteText();
	static void SetYellowText();

	static void LineBreak();
};