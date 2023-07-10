#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>

class Harl
{
    public:
        typedef void (Harl::*privateMethodPtr)();
        void complain ( std::string name);
    private:
        void debug ( void );
        void info ( void );
        void warning ( void );
        void error ( void );
};

int arr_pos(std::string name, std::string arr[]);

#endif