#include "Player.h"

Player::Player(int value)
{
    health = new int(value);
}

Player::~Player()
{
    delete health;
}

Player::Player(const Player& other)
    : health(new int(*other.health))
{
}

Player& Player::operator=(const Player& other)
{
    *health = *other.health;
    return *this;
}

Player::Player(Player&& other)
{
    health = other.health;
    other.health = nullptr;
}

Player& Player::operator=(Player&& other)
{
    delete health;
    health = other.health;
    other.health = nullptr;

    return *this;
}

int Player::GetHealth() const
{
    return *health;
}

void Player::SetHealth(int health)
{
    *(this->health) = health;
}