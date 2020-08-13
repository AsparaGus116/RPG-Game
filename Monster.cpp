#include "Monster.h"

Monster::Monster(CreatureType type_in) :
	type{ type_in }
{
	inventory.resize(2);
	health = typeHealth[type];
}

int Monster::typeHealth[CreatureType::MAX_ITEMS] = { 1,2,3,4 };
