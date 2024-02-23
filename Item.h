#ifndef Item_cpp
#define Item_cpp

#include <iostream>

using namespace std;

class Item{

private:
    string name;

public: 
    Item();
    Item(string name);

    string getName();

};

class Weapon: public Item{

private:
    double damage;

public:
    Weapon();
    Weapon(string name, double damage);

    double getDamage();

};

#endif