#ifndef Character_cpp
#define Character_cpp

#include "HealthBar.h"
#include "Weapon.h"

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
	Character(string character_name, double max_health, HealthBar& healthbar, Weapon& weapon);

	// Methods
	void damage(double amount);
    void heal(double amount);
	void attack(Character& target);
	void equip_weapon(Weapon& weapon);
	void displayHealth();

	// Set/Get
    double getHealth();
};

#endif