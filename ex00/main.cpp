#include "./includes/Zombie.hpp"

int main ()
{
    Zombie *vasiliy = newZombie("vasya");
    randomChump("dmitri");
    vasiliy->announce();
    delete (vasiliy);
}