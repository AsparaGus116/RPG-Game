#include "Item.h"

Item::Item()
{
	name = "Empty";
	attack = 0;
	durability = 0;
}

Item::Item(std::string itemName, int itemAttack, int itemDurability, int xPos, int yPos):
	name{itemName},
	attack{itemAttack},
	durability{itemDurability}
{
	location.first = xPos;
	location.second = yPos;
}

Item::Item(std::string itemName, int itemAttack, int itemDurability):
	name{ itemName },
	attack{ itemAttack },
	durability{ itemDurability }
{
	location.first = -1;
	location.second = -1;
}

int Item::GetAttack() const
{
	return attack;
}

int Item::GetDurability() const
{
	return durability;
}

std::string Item::GetName() const
{
	return name;
}

std::pair<int, int> Item::GetLocation() const
{
	return location;
}

bool operator==(const Item& i, const Item& j)
{
	return i.GetName() == j.GetName();
}
