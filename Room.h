#pragma once

#include <string>

class Room
{
public:
	Room() = default;
	Room(std::string roomName, std::string desc, bool up, bool down, bool left, bool right);
	Room(std::string roomName, std::string desc, std::string info, bool up, bool down, bool left, bool right);

	std::string GetName() const;
	std::string GetDescription() const;
	std::string GetInfo() const;

	bool CanUp() const;
	bool CanDown() const;
	bool CanLeft() const;
	bool CanRight() const;

	bool HasInfo() const;

	void HasVisited();
public:
	bool hasVisited{ false };

private:
	

	std::string name = "Empty Room??";

	std::string description = "Seems the developer forgot to fill this in.";

	std::string extraInfo;
	
	bool canUp = true;
	bool canDown = true;
	bool canLeft = true;
	bool canRight = true;
};