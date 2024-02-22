#include "Character.h"
#include "HealthBar.h"
#include "Weapon.h"
#include "Inventory.h"

#include <iostream>

using namespace std;

// Constructor
Character::Character(){}

Character::Character(string character_name, double character_max_health, HealthBar& character_health_bar, Weapon& character_weapon){
    name = character_name;
    max_health = character_max_health;
    health_bar= character_health_bar;
    weapon = character_weapon;
    health = max_health;
}

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

void Character::equip_weapon(Weapon& new_weapon){
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

Player::Player(string character_name, double max_health, HealthBar& healthbar, Weapon& weapon)
: Character(character_name, max_health, healthbar, weapon){
    inventory = inventory;
}