#include "Map.h"

Room Map::layout[height][width];

void Map::BuildMap()
{
	layout[5][5] = Room("Edge Of Path", "Trees surround you on three sides. You cannot see very far, except to the east, where the path seems to feed into a clearing.", "On the ground, you can see a half-finished sandwich.", false, false, false, true);
}

int Map::GetWidth()
{
	return width;
}

int Map::GetHeight()
{
	return height;
}

Room& Map::GetRoom(int xPos, int yPos)
{
	return layout[yPos][xPos];
}


