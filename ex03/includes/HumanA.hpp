#ifndef HUMANA_H
#define HUMANA_H

#include "./Weapon.hpp"

class HumanA
{
    public:
        Weapon weapon;
        void attack();
        HumanA(std::string n, Weapon w);
    private:
        std::string name;
};

#endif