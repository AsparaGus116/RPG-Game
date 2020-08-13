#include <random>

struct Random
{
	Random() = default; 

	static int GetRandomNumber(int min, int max);

	static bool GetSuccessOrFail(double percentage);

	static bool GetSuccessOrFail(int percentage);
};