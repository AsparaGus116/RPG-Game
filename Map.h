#pragma once

#include "Room.h"

class Map
{
public:
	Map() = default;
	static void BuildMap();

	static int GetWidth();
	static int GetHeight();

	

	static Room& GetRoom(int xPos, int yPos);

private:
	static constexpr int width = 10;
	static constexpr int height = 10;

	static Room layout[height][width];
};