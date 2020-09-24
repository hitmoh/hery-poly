#ifndef __MAGE_HPP__
#define __MAGE_HPP__
#include "personage.hpp"

class mage : public personage
{
    protected:
        int mMana;
    public:
        mage(string);
        virtual void present(void) =0;
        
};




#endif