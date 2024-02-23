#include "Item.h"

#include <iostream>

using namespace std;

Item::Item(){}

Item::Item(string item_name){
    name = item_name;
}

string Item::getName(){
    return name;
}


Weapon::Weapon(){}

Weapon::Weapon(string weapon_name, double weapon_damage)
: Item(weapon_name){
    damage = weapon_damage;
}

// Methods

double Weapon::getDamage(){
    return damage;
}