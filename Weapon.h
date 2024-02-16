#ifndef Weapon_cpp
#define Weapon_cpp

#include <iostream>

using namespace std;

class Weapon{

private:
    string name;
    double damage;

public:
    Weapon();
    Weapon(string name, double damage);

    double getDamage();
    string getName();

};

#endif