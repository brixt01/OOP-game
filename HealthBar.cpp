#include "HealthBar.h"

#include <cmath>
#include <iostream>

using namespace std;

// Constructor
HealthBar::HealthBar(char h_empty, char h_full)
: empty(h_empty), full(h_full)
{}

// Methods

void HealthBar::display(string name, double health, double max_health){
    int n_full = ceil((health/max_health)*10);
    int n_empty = 10 - n_full;
    cout << name << ": ";
    cout << '[' << string(n_full, full) << string(n_empty, empty) << ']' << ' ';
    cout << health << '/' << max_health << endl;
}