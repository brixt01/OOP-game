#ifndef Inventory_cpp
#define Inventory_cpp

#include "Weapon.h"

#include <vector>

using namespace std;

class Inventory{
    private:
        vector<Weapon> inventory;

    public:
        Inventory();

        Weapon getItem(int index);
        void addItem(Weapon item);
        void removeItem(int index);
        void displayItems();
};

#endif