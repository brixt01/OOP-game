#include "Weapon.h"

#include <iostream>

using namespace std;

// Constructors

Weapon::Weapon(){};

Weapon::Weapon(string weapon_name, double weapon_damage){
    name = weapon_name;
    damage = weapon_damage;
}

// Methods

double Weapon::getDamage(){
    return damage;
}

string Weapon::getName(){
    return name;
}