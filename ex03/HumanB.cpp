#include "./includes/HumanB.hpp"

HumanB::HumanB(std::string n)
{
    this->name = n;
}

void HumanB::setWeapon(Weapon w)
{
    this->weapon = w;
}

void HumanB::attack()
{
    std::cout << this->name << " attacks with their " << this->weapon.getType() << std::endl;
}