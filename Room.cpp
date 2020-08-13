#include "Room.h"


Room::Room(std::string roomName, std::string desc, bool up, bool down, bool left, bool right):
	name{roomName},
	description{desc},
	canUp{up},
	canDown{ down },
	canLeft{left},
	canRight{right}
{
}

Room::Room(std::string roomName, std::string desc, std::string info, bool up, bool down, bool left, bool right):
	name{ roomName },
	description{ desc },
	extraInfo{info},
	canUp{ up },
	canDown{ down },
	canLeft{ left },
	canRight{ right }
{
}


std::string Room::GetName() const
{
	return name;
}

std::string Room::GetDescription() const
{
	return description;
}

std::string Room::GetInfo() const
{
	return extraInfo;
}

bool Room::CanUp() const
{
	return canUp;
}

bool Room::CanDown() const
{
	return canDown;
}

bool Room::CanLeft() const
{
	return canLeft;
}

bool Room::CanRight() const
{
	return canRight;
}

bool Room::HasInfo() const
{
	return extraInfo.size() != 0;
}

void Room::HasVisited()
{
	hasVisited = true;
}

