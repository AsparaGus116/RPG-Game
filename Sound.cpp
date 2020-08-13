#include "Sound.h"

void Sound::PlayWavFile(const wchar_t* filename)
{
	PlaySound(LPCTSTR(filename), NULL, SND_FILENAME | SND_ASYNC);
}
