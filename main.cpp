// Required modules
#include <iostream>

// Header files
#include "Character.h"
#include "HealthBar.h"
#include "Weapon.h"

using namespace std;        // Namespace

void fight(Character&, Character&);     // Each character attacks the other, and both health bars are displayed

int main(){

    // Welcome message
    cout << "Welcome to the game!" << endl;
    cout << endl;

    // Set up health bar, weapon and character objects

    HealthBar healthbar('_', '#');

    Weapon fists("fists", 1);
    Weapon sword("sword", 5);

    Character player("Player", 100, healthbar, fists);
    Character goblin("Goblin", 100, healthbar, fists);

    // Display initial healths

    cout << player.getName() << " has been attacked by a " << goblin.getName() << ". A fight ensues..." << endl;
    cout << endl;

    player.displayHealth();
    goblin.displayHealth();
    cout << endl;

    fight(player, goblin);
    fight(player, goblin);
    fight(player, goblin);

    player.equip_weapon(sword);
    cout << endl;

    fight(player, goblin);
    fight(player, goblin);
    fight(player, goblin);
}

void fight(Character& player, Character& enemy){
    player.attack(enemy);
    enemy.attack(player);
    enemy.displayHealth();
    player.displayHealth();
    cout << endl;
}