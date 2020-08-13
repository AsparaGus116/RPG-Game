#pragma once

#include <iostream>
#include "Random.h"
#include "Room.h"
#include "Map.h"
#include "Item.h"
#include "Sound.h"
#include "Player.h"

class Game
{
public:


	bool SearchInput(std::string phrase);

	std::string ToUpper(std::string phrase);

	void InputToUpper();

	void GetUserInput();

	std::string ReturnInput() const;

	void Go();

	void RunCommands();

	void RunStartSeq();

	void CantMove();

	void PrintRoom();

private:
	std::string input{};

	Player player{};

	
};