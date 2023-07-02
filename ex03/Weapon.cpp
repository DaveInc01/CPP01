#include "./includes/Weapon.hpp"

void Weapon::setType(const std::string t)
{
   *this->type = t;
}

const std::string &Weapon::getType()
{
    const std::string &strRef = *this->type;
    return (strRef);
}

Weapon::Weapon(std::string t)
{
   setType(t);
}