#include "./includes/Harl.hpp"

int arr_pos(std::string name, std::string arr[])
{
    int len = *(&arr + 1) - arr;
    for (int i = 0; i < len; i++)
    {
        if (name == arr[i])
            return(i);
    }
    return (-1);
}