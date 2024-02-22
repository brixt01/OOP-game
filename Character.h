#ifndef Character_cpp
#define Character_cpp

#include "HealthBar.h"
#include "Weapon.h"
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
	Character();
	Character(string character_name, double max_health, HealthBar& healthbar, Weapon& weapon);

	// Methods
	void damage(double amount);
    void heal(double amount);
	void attack(Character& target);
	void equip_weapon(Weapon& weapon);
	void displayHealth();

	// Set/Get
	string getName();
    double getHealth();
};

class Player:public Character{
	public:
		Inventory inventory;
	public:
		Player(string character_name, double max_health, HealthBar& healthbar, Weapon& weapon);
};

#endif