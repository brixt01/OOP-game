#include "Character.h"
#include "HealthBar.h"
#include "Item.h"
#include "Inventory.h"

#include <iostream>

using namespace std;

// Constructor

Character::Character(string c_name, double c_max_health, HealthBar& c_health_bar, Weapon& c_weapon)
: name(c_name), max_health(c_max_health), health(c_max_health), health_bar(c_health_bar), weapon(c_weapon){}

// Methods

void Character::damage(double amount){
    if(health - amount <= 0){
        health = 0;
        return;
    }
    
    cout << name << " took " << amount << " damage" << endl;
    health -= amount;
}

void Character::heal(double amount){
    if(health + amount >= max_health){
        health = max_health;
        return;
    }

    cout << name << " healed " << amount << " damage" << endl;
    health += amount;
}

void Character::attack(Character& target){
    cout << name << " attacked " << target.name << " using " << weapon.getName() << endl;
    target.damage(weapon.getDamage());
}

void Character::equipWeapon(Weapon& new_weapon){
    cout << name << " equipped " << new_weapon.getName() << endl;
    weapon = new_weapon;
}

void Character::displayHealth(){
    health_bar.display(name, health, max_health);
}

string Character::getName(){
    return name;
}

double Character::getHealth(){
    return health;
}

// PLAYER

Player::Player(string c_name, double c_max_health, HealthBar& c_health_bar, Weapon& c_weapon)
: Character(c_name, c_max_health, c_health_bar, c_weapon){}