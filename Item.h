#ifndef ITEM_H
#define ITEM_H

#include <iostream>

using namespace std;

class Item{

private:
    string name;

public: 
    Item(string name);

    string getName();

};

class Weapon: public Item{

private:
    double damage;

public:
    Weapon(string name, double damage);

    double getDamage();

};

#endif