#include "HealthBar.h"

#include <cmath>
#include <iostream>

using namespace std;

// Constructor

HealthBar::HealthBar(){};

HealthBar::HealthBar(char empty, char full){
    empty_char = empty;
    full_char = full;
}

// Methods

void HealthBar::display(string name, double health, double max_health){
    int full = ceil((health/max_health)*10);
    int empty = 10 - full;
    cout << name << ": ";
    cout << '[' << string(full, full_char) << string(empty, empty_char) << ']' << ' ';
    cout << health << '/' << max_health << endl;
}