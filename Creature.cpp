#include "Creature.h"

int Creature::GetHealth() const
{
    return health;
}

void Creature::Add(Item i)
{
    inventory.push_back(i);
}

bool Creature::Drop(std::string name)
{
    for (int i = 0; i < static_cast<int>(inventory.size()); ++i)
    {
        if (inventory[i].GetName() == name)
        {
            inventory.erase(inventory.begin() + i);
            return true;
        }
    }
    return false;
}

const Item Creature::items[16] =
{

};
