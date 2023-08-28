#ifndef WIZARD_H
#define WIZARD_H
#include "player.h"
#include <string>



class Wizard : public Player {
    private:
    int mana;
    public:
    Wizard(std::string sub_name, int sub_health, int sub_damage, int sub_mana);
    void setMana(int sub_mana);
    int getMana();
    void castSpell(Player* opponent);

};



#endif