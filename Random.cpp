#include "Random.h"

int Random::GetRandomNumber(int min, int max)
{
	static std::mt19937 mersenne;
	std::uniform_int_distribution<int> die{ min, max };
	return die(mersenne);
}

bool Random::GetSuccessOrFail(double percentage)
{
	static std::mt19937 mersenne;
	std::uniform_int_distribution<int> die{ 1, 100 };
	if (static_cast<double>(die(mersenne)) <= percentage)
		return true;
	else
		return false;
}

bool Random::GetSuccessOrFail(int percentage)
{
	static std::mt19937 mersenne;
	std::uniform_int_distribution<int> die{ 1, 100 };
	if (die(mersenne) <= percentage)
		return true;
	else
		return false;
}
