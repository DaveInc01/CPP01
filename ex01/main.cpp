#include "./includes/Zombie.hpp"

int main()
{
    Zombie *Z = zombieHorde(5, "Anatoliy");
    for (int i = 0; i < 5; i++)
    {
        Z[i].announce();
    }
}