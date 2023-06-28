#include "./includes/Zombie.hpp"

void Zombie::announce(){
    std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie(std::string n){
    this->name = n;
}  

Zombie::~Zombie (){
    std::cout << this->name << " was died(" << std::endl;
}

