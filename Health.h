#pragma once

class Health
{
private:
    int currenthealth = 100;
    int maxhealth = 100;

public:
    void TakeDamage(int damage);
    int GetCurrent() const;
};