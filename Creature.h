#pragma once

#include "Item.h"
#include <vector>

class Creature
{
public:

	int GetHealth() const;

public:
	std::vector<Item> inventory{};

	static const Item items[16];

	void Add(Item i);

	bool Drop(std::string name);

	int health{ 0 };
};