#include <iostream>
#include "player.h"
#include "wizard.h"

Wizard::Wizard(std::string sub_name, int sub_health, int sub_damage, int sub_mana) {
    setName(sub_name);
    setHealth(sub_health);
    setDamage(sub_damage);
    mana = sub_mana;
    
}

int Wizard::getMana() {
    return mana;
}
void Wizard::setMana(int sub_mana) {
    mana = sub_mana;
    setDamage(mana);
}

void Wizard::castSpell(Player *opponent) {
    opponent->setHealth(opponent->getHealth() - mana);
    std::cout << getName() << " casts a spell on " << opponent->getName() << " for " << getDamage() << " damage.\n";
    std::cout << opponent->getName() << " has " << opponent->getHealth() << " health left!" << std::endl;
}

