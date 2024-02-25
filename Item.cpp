#include "Item.h"

#include <iostream>

using namespace std;

Item::Item(string i_name)
: name(i_name){}

string Item::getName(){
    return name;
}

Weapon::Weapon(string w_name, double w_damage)
: Item(w_name), damage(w_damage){}

// Methods

double Weapon::getDamage(){
    return damage;
}