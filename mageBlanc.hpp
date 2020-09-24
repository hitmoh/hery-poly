#ifndef __MAGEBLANC_HPP__
#define __MAGEBLANC_HPP__
#include "mage.hpp"

class mageBlanc : public mage
{
    public:
        mageBlanc(string);
        void heal(personage*);
        void present(void);
};





#endif