#pragma once


class Player
{
private:
	int* health;
public:
	Player(int value);
	~Player();
	Player(const Player& other);
	Player& operator=(const Player& other);
	int GetHealth() const;
	Player(Player&& other);
	Player& operator=(Player&& other);
	void SetHealth(int health);


};
