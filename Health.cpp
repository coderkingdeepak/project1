#include "Health.h"

void Health::TakeDamage(int damage)
{
    currenthealth -= damage;
}

int Health::GetCurrent() const
{
    return currenthealth;
}