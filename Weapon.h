#pragma once

class Weapon {
private:
    int damage;

public:
    Weapon(int damage);


    Weapon(const Weapon& other);


    Weapon& operator=(const Weapon& other);

    void fire();
    int GetDamage() const;
    void SetDamage(int damage);
};