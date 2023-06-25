#include "./includes/Zombie.hpp"

void Zombie::announce(){
    std::cout << this->name << ": BraiiiiiiinnnzzzZ...";
}

Zombie* Zombie::newZombie( std::string name )
{
    Zombie *z;
    z->name = name;
    return (z);
}

void Zombie::randomChump( std::string name )
{
    Zombie *z;
    z = z->newZombie(name);
    z->announce();
}