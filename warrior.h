#ifndef WARRIOR_H
#define WARRIOR_H
#include <string>
#include "player.h"

class Warrior : public Player {
    private:
    std::string weapon;
    public:
    Warrior(std::string sub_name, int sub_health, int sub_damage, std::string sub_weapon);
    std::string getWeapon();
    void setWeapon(std::string sub_weapon);
    void swingWeapon(Player *opponent);
};


#endif