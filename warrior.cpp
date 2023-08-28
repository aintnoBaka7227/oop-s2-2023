#include "player.h"
#include "warrior.h"
#include <iostream>

Warrior::Warrior(std::string sub_name, int sub_health, int sub_damage, std::string sub_weapon) {
    setName(sub_name);
    setHealth(sub_health);
    setDamage(sub_damage);
    weapon = sub_weapon;
}

std::string Warrior::getWeapon() {
    return weapon;
}

void Warrior::setWeapon(std::string sub_weapon) {
    weapon = sub_weapon;
}

void Warrior::swingWeapon(Player *opponent) {
    opponent->setHealth(opponent->getHealth() - getDamage());
    std::cout << getName() << " swings their " << weapon << " at " << opponent->getName() << "caused " << getDamage() << "damage!" << "!\n";
    std::cout << opponent->getName() << " has " << opponent->getHealth() << " health left!" << std::endl;
}