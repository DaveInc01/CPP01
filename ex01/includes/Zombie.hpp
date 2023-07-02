#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie{
    public:
    void announce( void );
    Zombie() {};
    Zombie(std::string);
    ~Zombie();
    private:
      std::string name;
};

Zombie*    zombieHorde( int N, std::string name );

#endif
