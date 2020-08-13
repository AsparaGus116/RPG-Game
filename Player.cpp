#include "Player.h"

Player::Player()
{
    Add(ItemList::torch);
}

int Player::GetXPos() const
{
    return location.first;
}

int Player::GetYPos() const
{
    return location.second;
}

bool Player::CanMove(int deltaX, int deltaY)
{
    int newX = location.first + deltaX;
    int newY = location.second + deltaY;
    if (newX < 0 || newY < 0 ||
        newX >= Map::GetWidth() || newY >= Map::GetHeight())
    {
        return false;
    }
    else
    {
        return true;
    }
}

void Player::Move(int deltaX, int deltaY)
{
    if (CanMove(deltaX, deltaY))
    {
        location.first += deltaX;
        location.second += deltaY;
    }
    else
    {
        //Enter Cannot Move Option
    }
}

bool Player::GetIsDead() const
{
    return isDead;
}

std::pair<int, int> Player::GetLocation() const
{
    return location;
}

bool Player::HasItem(Item item) const
{
    for (auto element : inventory)
    {
        if (element == item) {
            return true;
        }
    }
    return false;
}
