#ifndef Inventory_cpp
#define Inventory_cpp

#include "Item.h"

#include <vector>

using namespace std;

class Inventory{
    private:
        vector<Item> inventory;

    public:
        Inventory();

        Item getItem(int index);
        void addItem(Item& item);
        void removeItem(int index);
        void displayItems();
};

#endif