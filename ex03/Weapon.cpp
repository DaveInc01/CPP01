#include "./includes/Weapon.hpp"

void Weapon::setType(std::string t)
{
   this->type = t;
}

const std::string Weapon::getType()
{
    std::string &strRef = &this->type;
}