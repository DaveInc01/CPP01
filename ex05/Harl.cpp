#include "./includes/Harl.hpp"

void Harl::debug( void )
{
    std::cout << "[ DEBUG ]" << std::endl
    << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. " << std::endl
    << "I really do!" 
    << std::endl << std::endl;
}

void Harl::info( void )
{
    std::cout << "[ INFO ]" << std::endl
    << "I cannot believe adding extra bacon costs more money. " << std::endl
    << "You didn’t putenough bacon in my burger! If you did, I wouldn’t be asking for more!"
    << std::endl <<std::endl;
}

void Harl::warning ( void )
{
    std::cout << "[ WARNING ]" << std::endl
    << "I think I deserve to have some extra bacon for free. " << std::endl
    << "I’ve been coming foryears whereas you started working here since last month" 
    << std::endl << std::endl;
}

void Harl::error ( void )
{
    std::cout << "[ ERROR ]" << std::endl
    << "This is unacceptable! I want to speak to the manager now." 
    << std::endl;
}

void Harl::complain ( std::string name)
{
    privateMethodPtr debugPtr = &Harl::debug;
    privateMethodPtr infoPtr = &Harl::info;
    privateMethodPtr warningPtr = &Harl::warning;
    privateMethodPtr errorPtr = &Harl::error;

    std::string arr[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    int pos = arr_pos(name, arr);

    switch (pos)
    {
    case 0:
        (this->*debugPtr)();
        break;
    case 1:
        (this->*infoPtr)();
        break;
    case 2:
        (this->*warningPtr)();
        break;
    case 3:
        (this->*errorPtr)();
        break;
    default:
        std::cout << "DEBUG | INFO | WARNING | ERROR";
        break;
    }
}