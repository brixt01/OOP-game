#ifndef HealthBar_cpp
#define HealthBar_cpp

#include <iostream>

using namespace std;

class HealthBar{

private:
    char empty_char;
    char full_char;

public:
    // Constructors
    HealthBar();
    HealthBar(char empty, char full);

    // Methods
    void display(string name, double health, double max_health);
};

#endif