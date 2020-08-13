#pragma once

#include <string>

class Item
{
public:
	Item();

	Item(std::string itemName, int itemAttack, int itemDurability, int xPos, int yPos);

	Item(std::string itemName, int itemAttack, int itemDurability);

public:
	int GetAttack() const;

	int GetDurability() const;

	std::string GetName() const;

	std::pair<int, int> GetLocation() const;

	friend bool operator== (const Item& i, const Item& j);

private:
	std::pair<int, int> location;
	std::string name;
	int attack;
	int durability;
};

