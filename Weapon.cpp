#include <iostream>
#include "Weapon.h"

Weapon::Weapon(int damage)
    : damage(damage)
{
}

Weapon& Weapon::operator=(const Weapon& other)
{
    this->damage = other.damage;

    return *this;
}

void Weapon::SetDamage(int damage)
{
    this->damage = damage;
}

void Weapon::fire()
{
    std::cout << "Weapon fired" << std::endl;
}

int Weapon::GetDamage() const
{
    return damage;
}