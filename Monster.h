#pragma once

#include <array>
#include "Creature.h"
#include "CreatureType.h"

class Monster : public Creature
{
public:
	Monster(CreatureType type_in);

	static int typeHealth[CreatureType::MAX_ITEMS];
	
private:
	CreatureType type;

};