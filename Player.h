#pragma once
#include <array>
#include <string>
#include <utility>
#include "Creature.h"
#include "Map.h"
#include "ItemList.h"

class Player : public Creature
{

public:
	Player();

	int GetXPos() const;
	int GetYPos() const;

	bool CanMove(int deltaX, int deltaY);
	void Move(int deltaX, int deltaY);

	bool GetIsDead() const;

	std::pair<int, int> GetLocation() const;

	bool HasItem(Item item) const;
private:
	std::pair<int, int> location{ 5,5 };

	bool isDead{ false };
};