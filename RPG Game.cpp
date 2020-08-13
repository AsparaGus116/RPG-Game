#include "RPG Game.h"

bool Game::SearchInput(std::string phrase)
{
	return input.find(ToUpper(phrase)) != std::string::npos;
}

std::string Game::ToUpper(std::string phrase)
{
	for (int i = 0; i < phrase.length(); ++i)
	{
		if (phrase[i] <= 122 && phrase[i] >= 97)
		{
			phrase[i] -= 32;
		}
	}
	return phrase;
}

void Game::InputToUpper()
{
	for (int i = 0; i < input.length(); ++i)
	{
		if (input[i] <= 122 && input[i] >= 97)
		{
			input[i] -= 32;
		}
	}
}

void Game::GetUserInput()
{
	std::getline(std::cin, input);
	std::cout << '\n';
	InputToUpper();
}

std::string Game::ReturnInput() const
{
	return input;
}

void Game::Go()
{
	RunStartSeq();
	while (!player.GetIsDead() && (input != ("quit")))
	{
		
		GetUserInput();
		RunCommands();
	}
	return;
}

void Game::RunCommands()
{
	if (SearchInput("inventory"))
	{
		std::cout << "\nInventory:\n";
		for (auto element : player.inventory)
		{
			std::cout << element.GetName() << '\n';
		}
	}
	else if (SearchInput("eat") || SearchInput("consume") || SearchInput("bite"))
	{
		if (player.GetLocation() == ItemList::sandwich.GetLocation() && !(player.HasItem(ItemList::sandwich)))
		{
			std::cout << "You're gonna eat food off of the FLOOR? That's DISGUSTING, dude. Do you know where that's BEEN?\n";
		}
	}
	else if (SearchInput("look"))
	{
		std::cout << Map::GetRoom(player.GetXPos(), player.GetYPos()).GetDescription() << "\n\n";
	}
	else if (SearchInput("west") || SearchInput("left") || SearchInput("l") || SearchInput("w"))
	{
		if (Map::GetRoom(player.GetXPos(), player.GetYPos()).CanLeft())
		{
			player.Move(-1,0);
			PrintRoom();
		}
		else
		{
			CantMove();
		}
	}
	else if (SearchInput("east") || SearchInput("right") || SearchInput("r") || SearchInput("e"))
	{
		if (Map::GetRoom(player.GetXPos(), player.GetYPos()).CanRight())
		{
			player.Move(1, 0);
			PrintRoom();
		}
		else
		{
			CantMove();
		}
	}
	else if (SearchInput("south") || SearchInput("down") || SearchInput("s") || SearchInput("d"))
	{
		if (Map::GetRoom(player.GetXPos(), player.GetYPos()).CanDown())
		{
			player.Move(0, -1);
			PrintRoom();
		}
		else
		{
			CantMove();
		}
	}
	else if (SearchInput("north") || SearchInput("up") || SearchInput("n") || SearchInput("u"))
	{
		if (Map::GetRoom(player.GetXPos(), player.GetYPos()).CanUp())
		{
			player.Move(0,1);
			PrintRoom();
		}
		else
		{
			CantMove();
		}
	}
	else
	{
		std::cout << "I'm not sure I understand what you'd like to do.\n";
	}
}

void Game::RunStartSeq()
{
	Map::BuildMap();
	PrintRoom();
}

void Game::CantMove()
{
	std::cout << "Seems you can't go that way.\n";
}

void Game::PrintRoom()
{
	Room room{ Map::GetRoom(player.GetXPos(), player.GetYPos()) };
	std::cout << room.GetName() << '\n';
	if (!room.hasVisited)
	{
		std::cout << room.GetDescription() << " ";
		Map::GetRoom(player.GetXPos(), player.GetYPos()).HasVisited();
	}
	if (!room.GetInfo().length() < 1)
	{
		std::cout << room.GetInfo();
	}
	std::cout << "\n\n";

}
