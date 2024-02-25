#ifndef HEALTHBAR_H
#define HEALTHBAR_H

#include <iostream>

using namespace std;

class HealthBar{

private:
    char empty;
    char full;

public:
    // Constructors
    HealthBar(char empty, char full);

    // Methods
    void display(string name, double health, double max_health);
};

#endif