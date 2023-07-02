#ifndef HUMANB_H
#define HUMANB_H

#include "./Weapon.hpp"

class HumanB
{
    public:
        Weapon weapon;
        void attack();
        HumanB(std::string n);
        void setWeapon(Weapon w);
    private:
        std::string name;
};

#endif