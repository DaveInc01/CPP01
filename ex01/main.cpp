#include "./includes/Zombie.hpp"

int main()
{
    int N = 3;
    Zombie *Z = zombieHorde(N, "Anatoliy");
    for (int i = 0; i < N; i++)
        Z[i].announce();
    delete[] Z;
    return (0);
}