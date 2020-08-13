#pragma once
#pragma comment( lib, "Winmm.lib" )

#include <Windows.h>
#include <mmsystem.h>
#include <string>

struct Sound
{
	static void PlayWavFile(const wchar_t* filename);
};