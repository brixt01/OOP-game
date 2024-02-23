// Required modules
#include <iostream>

// Header files
#include "Character.h"
#include "HealthBar.h"
#include "Item.h"
#include "Inventory.h"
#include "Fight.h"

using namespace std;        // Namespace

// Healthbars
HealthBar player_healthbar('_', '#');
HealthBar enemy_healthbar('_', '@');

// Weapons
Weapon fists("fists", 1);
Weapon sword("sword", 5);
Weapon club("club", 3);
Weapon axe("axe", 6);

// Items
Item key("key");
Item coin("coin");

// Characters
Player player("Player", 50, player_healthbar, fists);
Character goblin("Goblin", 10, enemy_healthbar, fists);
Character armed_goblin("Armed Goblin", 50, enemy_healthbar, club);
Character knight("Knight", 50, enemy_healthbar, sword);

int main(){

    // Welcome message
    cout << "Welcome to the game!" << endl;
    cout << endl;

    player.inventory.addItem(sword);
    player.inventory.addItem(sword);
    player.inventory.addItem(club);
    player.inventory.addItem(key);
    
    // Vector of fights
    vector<Item> drops{key};
    Fight fight(player, goblin, drops);
    fight.start();

    player.inventory.displayItems();
}