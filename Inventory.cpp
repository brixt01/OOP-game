#include "Inventory.h"

using namespace std;

Inventory::Inventory(){};

Item Inventory::getItem(int index){
    return inventory[index];
}

void Inventory::addItem(Item& item){
    inventory.push_back(item);
}

void Inventory::removeItem(int index){
    inventory.erase(inventory.begin() + index);
}

void Inventory::displayItems(){
    cout << "Inventory: " << endl;
    for(int i=0; i<inventory.size(); i++){
        cout << i << ". " << inventory[i].getName() << endl;
    }
    cout << endl;
}