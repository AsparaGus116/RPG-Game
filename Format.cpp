#include "Format.h"

void Format::SetConsoleColor(WORD COLOR)
{
	HANDLE out = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(out, COLOR);
}

void Format::SetBlueText()
{
	SetConsoleColor(FOREGROUND_BLUE | FOREGROUND_INTENSITY);
}

void Format::SetGreenText()
{
	SetConsoleColor(FOREGROUND_GREEN | FOREGROUND_INTENSITY);
}

void Format::SetRedText()
{
	SetConsoleColor(FOREGROUND_RED | FOREGROUND_INTENSITY);
}

void Format::SetWhiteText()
{
	SetConsoleColor(FOREGROUND_GREEN | FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_INTENSITY);
}

void Format::SetYellowText()
{
	SetConsoleColor(FOREGROUND_GREEN | FOREGROUND_RED | FOREGROUND_INTENSITY);
}

void Format::LineBreak()
{
	using namespace std;
	cout << "\n------------------------------\n\n";
}
