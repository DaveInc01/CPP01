#ifndef WEAPON_H
#define WEAPON_H

#include <iostream>

class Weapon{
    public:
        const std::string getType();
        void setType(std::string);
    private:
        std::string type; 
};

#endif