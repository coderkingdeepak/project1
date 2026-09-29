#include <iostream>
#include <utility>
#include "Player.h"

int main()
{
    Player p1(100);


    Player p2 = std::move(p1);

    std::cout << "p2 health: " << p2.GetHealth() << std::endl;

    Player p3(50);


    p3 = std::move(p2);

    std::cout << "p3 health: " << p3.GetHealth() << std::endl;
}