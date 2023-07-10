#include "./includes/Harl.hpp"

int main (int argc, char** argv)
{
    Harl girl;

    if (argc == 2)
        girl.complain(argv[1]);
    else
        std::cout << "Expected arguments count: 2" << std::endl;
    return (0);
}