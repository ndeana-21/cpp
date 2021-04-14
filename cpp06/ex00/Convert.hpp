#pragma once

#include <iostream>
#include <exception>
#include <math.h>
#include <iomanip>

class Convert
{
    public:
        Convert();
        Convert(std::string str);
        Convert(Convert &copy);
        ~Convert();
        Convert& operator=(Convert &copy);

        void    to_char();
        void    to_int();
        void    to_float();
        void    to_double();
    private:
        std::string _str;
        double      _num;
};