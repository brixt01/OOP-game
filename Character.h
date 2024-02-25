#ifndef CHARACTER_H
#define CHARACTER_H

#include "HealthBar.h"
#include "Item.h"
#include "Inventory.h"

class Character{

private:
	// Attributes
	string name;
    double max_health;
	double health;
	HealthBar health_bar;
	Weapon weapon;

public:
	// Constructor
	Character(string name, double max_health, HealthBar& health_bar, Weapon& weapon);

	// Methods
	void damage(double amount);
    void heal(double amount);
	void attack(Character& target);
	void equipWeapon(Weapon& weapon);
	void displayHealth();

	// Set/Get
	string getName();
    double getHealth();
};

class Player: public Character{
	public:
		Inventory inventory;

		Player(string character_name, double max_health, HealthBar& healthbar, Weapon& weapon);
};

#endif