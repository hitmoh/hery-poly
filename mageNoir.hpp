#ifndef __MAGENOIR_HPP__
#define __MAGENOIR_HPP__
#include "mage.hpp"

class mageNoir : public mage
{
    public:
        mageNoir(string);
        void poison(personage*);
        void present(void);
};





#endif